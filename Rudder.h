#pragma once

#include "MeshInfoLoader.h"
#include "Physics.h"
#include "Drawable.h"
#include "TorranceSparrow.h"
#include "ElementGeometry.h"

class RudderPhysics {
	MeshInfoLoader rudderMesh;
	ElementGeometry rudderGeometry;
	TorranceSparrow rudderMat;

	MeshInfoLoader handleMesh;
	ElementGeometry handleGeometry;
	TorranceSparrow handleMat;

	glm::vec3 pivotPoint;
	glm::vec3 rudderDirection;

	void calculatePivotPoint();

public:
	Drawable rudderDrawable;
	Drawable handleDrawable;

	RudderPhysics(char *rudderObj, char *handleObj, char *pivotObj, char *rudderImage, char *handleImage, int rudderUnit, int handleUnit);
	
	void calculateRudderDirection(glm::vec3 handle, float dimension);
	void updateModelMatrix(const glm::mat4 &model_matrix);	//Boat's model matrix

	vec3 applyForce(RigidBody *object);
};