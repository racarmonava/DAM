#include "MallaSenoidal.h"


MallaSenoidal::MallaSenoidal(int w,int h, int a, int p) : ParametricObject(w,h)
{
  this-> Amplitud = a;
  this-> Phase = p;
}


MallaSenoidal::~MallaSenoidal(void)
{
}

ofPoint MallaSenoidal::computePosition(ofPoint point){
		ofPoint p;
		
			p.x=(1000*(point.x));
			p.y=(1000*(point.y));
			//p.z= sin(Phase*2*PI*(sqrt(pow((p.x-0.5),2)+pow((p.y-0.5),2))))*Amplitud;
			p.z= Amplitud*sin(Phase*2*PI*(sqrt(pow((p.x-0.5),2)+pow((p.y-0.5),2))));
			return p;
		
	
}

ofPoint MallaSenoidal::computeNormal(ofPoint point){
		ofPoint p;
		p.x=sin(p.x);
		p.y=sin(p.y);
		p.z=1;
		return p;
}

float MallaSenoidal::getBigR(float phi, float theta, float periods, float waveMagnitude, float phase) {
	return  1; //R + waveMagnitude * sin(periods * phi + phase);
}

float MallaSenoidal::getSmallR(float phi, float theta, float periods, float waveMagnitude, float phase) {
	return 1 ;// r + waveMagnitude * sin(periods * theta + phase);
}