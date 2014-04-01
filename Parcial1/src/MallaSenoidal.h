#pragma once
#include "ParametricObject.h"

class MallaSenoidal : public ParametricObject
{
public:
	MallaSenoidal(int h, int w, int a, int p);
	~MallaSenoidal(void);

	ofPoint computePosition(ofPoint point);
	ofPoint computeNormal(ofPoint point);

protected:
	
	float getBigR(float phi, float theta, float periods = 1, float waveMagnitude = 0, float phase = 0);
	float getSmallR(float phi, float theta, float periods = 1, float waveMagnitude = 0, float phase = 0);
	float Amplitud, Phase;
	
};




