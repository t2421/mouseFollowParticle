/*
 *  Vector2D.cpp
 *  emptyExample
 *
 *  Created by taigakiyotaki on 2013/03/27.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "Vector2D.h"
#include <math.h>
#include <iostream>
Vector2D::Vector2D(){
	x=0;
	y=0;
}

Vector2D::Vector2D(const Vector2D &a){
	x=a.x;
	y=a.y;
}

Vector2D::Vector2D(float nx,float ny){
	x=nx;
	y=ny;
}

Vector2D& Vector2D::operator = (const Vector2D &a){
	x = a.x;
	y = a.y;
	return *this;
}

bool Vector2D::operator == (const Vector2D &a){

}

bool Vector2D::operator != (const Vector2D &a) const  {
	return x!=a.x || y!=a.y;
}

void Vector2D::zero(){
	x=0;
	y=0;
}

void Vector2D::sub(const Vector2D &a){
	x-=a.x;
	y-=a.y;
}

void Vector2D::add(const Vector2D &a){
	x+=a.x;
	y+=a.y;
}

void Vector2D::mult(float a){
	x*=a;
	y*=a;
}

void Vector2D::div(float a){
	float oneOverA = 1.0f/a;
	x*=oneOverA;
	y*=oneOverA;
	
}

void Vector2D::limit(float limitVal){
	float absX = fabs(x);
	float absY = fabs(y);
	if(x<0){
		if(absX>=limitVal){
			x=-limitVal;
		}
	}else{
		if(absX>=limitVal){
			x=limitVal;
		}
	}
	
	if(y<0){
		if(absY>=limitVal){
			y=-limitVal;
		}
	}else{
		if(absY>=limitVal){
			y=limitVal;
		}
	}
	
	
}

void Vector2D::normalize(){
	float mgSq = sqrt(x*x+y*y);
	if(mgSq>0.0f){
		float oneOverMag = 1/mgSq;
		x*=oneOverMag;
		y*=oneOverMag;
		
	}
}




