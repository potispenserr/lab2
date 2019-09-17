#include "mesh.h"
#include "config.h"


void MeshResource::genvertexbuffer() {
	//generate buffer id
	glGenBuffers(1, &vertexbuffer);

	//bind buffer to id
	glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);

	// copy vertex array to vertex buffer object
	glBufferData(GL_ARRAY_BUFFER, sizeof(bufferdata), bufferdata, GL_STATIC_DRAW);
}

void MeshResource::setattrib() {
	//set vertex attributes
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	//enable the vertex attribute
	glEnableVertexAttribArray(0);

}

void MeshResource::genvertexarray() {

	//generate vertex array object id
	glGenVertexArrays(1, &vertexarray);

	//bind vertex array object
	glBindVertexArray(vertexarray);
}

void MeshResource::genindexbuffer() {
	//generate index buffer id
	glGenBuffers(1, &indexbuffer);
	//bind index buffer
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexbuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indicies), indicies, GL_STATIC_DRAW);
}
