#pragma once

#include "ofMain.h"
#include "CustomBox.h"
#define NUM 100

class ofApp : public ofBaseApp{

	public:
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
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
private:
    CustomBox custombox[NUM];
//    ofColor mcolor[NUM];
//    
//    // boxを使うためのインスタンス
//    ofBoxPrimitive mbox[NUM];
//    
//    ofVec3f box_position[NUM];
//    ofVec3f box_speed[NUM];
    
    ofSpherePrimitive msphere;
    // ofEasyCam mcam;
    ofCamera mcam;
};
