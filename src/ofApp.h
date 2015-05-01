#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxKinect.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
    void exit();
	
    void drawInstructions();
    void drawPointCloud();
    
    void keyPressed(int key);
    
    ofxKinect kinect;
	ofxCv::ContourFinder contourFinder;
    
    ofImage colorImg;
    ofImage grayImage;         // grayscale depth image
    ofImage grayThreshNear;    // the near thresholded image
	ofImage grayThreshFar;     // the far thresholded image
    ofImage grayPreprocImage;  // grayscale pre-processed image
    
    int nearThreshold;
	int farThreshold;
    int angle;
    
	bool bDrawPointCloud;
    
    // used for viewing the point cloud
	ofEasyCam easyCam;
};
