#include "testApp.h"
#include "Vector2D.h"
#include <iostream>

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);
	ofSetFrameRate(60);
	Vector2D center = Vector2D(ofGetWidth()/2,ofGetHeight()/2);
	for (int i=0; i<10000; i++) {
		Particle2D p;
		p.location = Vector2D(ofRandom(0,ofGetWidth()),ofRandom(0,ofGetHeight()));
		p.velocity = Vector2D(ofRandom(-3,3),ofRandom(-3,3));
		particles.push_back(p);
	}
}

//--------------------------------------------------------------
void testApp::update(){
	int len = particles.size();
	for (int i=0; i<len; i++) {
		particles[i].mouse = Vector2D(mouseX,mouseY);
		particles[i].update();
	}
	particle.mouse = Vector2D(mouseX,mouseY);	
	particle.update();
	
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(255, 255, 255);
	
	int len = particles.size();
	for (int i=0; i<len; i++) {
		particles[i].draw();
	}
	
	particle.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}