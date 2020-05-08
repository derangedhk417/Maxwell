// Author: Adam J. Robinson
// Description: Implementation of a loop of wire and relevent 
// calculations.

#include "gaussian.h"

Loop::Loop(float z_l, float r_l, float w_r, float sigma) {
	this->z_l   = z_l;
	this->r_l   = r_l;
	this->w_r   = w_r;
	this->sigma = sigma;
}

float Loop::getResistance() {
	return 2.0 / (sigma * w_r);
}

float * Loop::getBField(float x, float y, float z, float I) {
	return NULL;
}