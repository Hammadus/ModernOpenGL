#ifndef MESH_H
#define MESH_H

#include<iostream>

#include <glm/glm.hpp>

#include <GL/glew.h>

class Vertex
{
	public:
		Vertex(const glm::vec3& pos)
		{
			this->pos = pos;
		}
	protected:
	private:
		glm::vec3 pos;
};

class Mesh
{
	public:

		Mesh(Vertex* verticies, unsigned int numVerticies);

		void Draw();

		virtual ~Mesh();

	protected:
	private:

		Mesh(const Mesh& other) {}
		void operator=(const Mesh& other) {}

		enum { POSITION_VB, NUM_BUFFERS};

		GLuint m_vertexArrayObject;
		GLuint m_vertexArrayBuffers[NUM_BUFFERS];
		unsigned int m_drawCount;
};

#endif //MESH_H
