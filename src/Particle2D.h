/*
 *  Particle.h
 *  emptyExample
 *
 *  Created by taigakiyotaki on 2013/03/27.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once
#include "ofMain.h"
#include "Vector2D.h"

class Particle2D{
public:
	Vector2D location;
	Vector2D velocity;
	Vector2D acceleration;
	Vector2D mouse;
	float friction;
	
	void update();
	void draw();
};