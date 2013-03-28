/*
 *  Vector2D.h
 *  emptyExample
 *
 *  Created by taigakiyotaki on 2013/03/27.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once

class Vector2D{
public:
	float x,y;
	Vector2D();
	Vector2D(const Vector2D &a);
	Vector2D(float nx,float ny);
	
	Vector2D& operator = (const Vector2D &a);
	bool operator == (const Vector2D &a);
	bool operator != (const Vector2D &a) const;
	
	void zero();
	void sub(const Vector2D &a);
	void add(const Vector2D &a);
	void mult(float a);
	void div(float a);
	void limit(float limitVal);
	
	void normalize();
};

inline Vector2D sub2D(const Vector2D &a,const Vector2D &b){
	return Vector2D(a.x-b.x,a.y-b.y);
}

inline float vectorMag2D(const Vector2D &a){
	return sqrt(a.x*a.x+a.y*a.y);
}

inline float crossProduct2D(const Vector2D &a,const Vector2D &b){
	return a.x * b.y - b.x * a.y;
}

inline float distance2D(const Vector2D &a, const Vector2D &b){
	float dx = a.x-b.x;
	float dy = a.y-b.y;
	return sqrt(dx*dx+dy*dy); 
}

extern const Vector2D kZeroVector;
