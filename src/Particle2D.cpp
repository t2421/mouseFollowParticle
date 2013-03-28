/*
 *  Particle.cpp
 *  emptyExample
 *
 *  Created by taigakiyotaki on 2013/03/27.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "Particle2D.h"
#include <iostream>

float friction = 0.9f;

void Particle2D::update(){
	Vector2D direction = sub2D(mouse, location);
	direction.normalize();
	direction.mult(0.5);
	acceleration = direction;
	velocity.add(acceleration);
	velocity.limit(10);	
	location.add(velocity);
	
}
void Particle2D::draw(){
	ofCircle(location.x, location.y, 1);
}