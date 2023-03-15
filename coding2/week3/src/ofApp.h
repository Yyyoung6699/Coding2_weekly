#ifndef _OF_APP
#define _OF_APP


#include "ofMain.h"
#include <vector>
#include "boid.h"
#include "point.hpp"

class ofApp : public ofBaseApp{
	
public:
    ~ofApp();
	
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);

    std::vector<Boid *> boids;
	
};

#endif	
