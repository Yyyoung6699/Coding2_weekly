#include "point.hpp"

point::point()
{
    separationWeight = 2.0f;
    cohesionWeight = 1.2f;
    alignmentWeight = 0.2f;
    
    separationThreshold = 20;
    neighbourhoodSize = 100;
    
    position = ofVec3f(ofRandom(0, 300), ofRandom(0, 300));
    velocity = ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1));
}

void point::draw(){
    ofSetColor(255, 255, 255);
    ofCircle(position.x, position.y, 10);
}
