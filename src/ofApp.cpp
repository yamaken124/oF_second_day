#include "ofApp.h"
ofVec3f position;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
//    position.x = ofGetWidth()/2;
//    position.y = ofGetHeight()/2;
//    position.z = 100;
    
    for(int i = 0; i < NUM; i++){
        custombox[i].init();
        
//        box_speed[i] = ofVec3f(ofRandom(ofGetWidth()),
//                            ofRandom(ofGetHeight()),
//                            ofRandom(-500, 500));
//        
//        box_speed[i] = ofVec3f(ofRandom(-2,2), ofRandom(-2,2), ofRandom(-2,2));
//        
//        mbox[i].setPosition(box_position[i]);
        
        
        // mbox[i].drawWireframe();
//        mbox[i].setPosition(ofRandom(ofGetWidth()),
//                            ofRandom(ofGetHeight()),
//                            ofRandom(-500, 500));
        
    }
    // boxの書き方1
    // mbox.setPosition(ofGetWidth()/2, ofGetHeight()/2, 0);
    // boxの書き方2
    
    msphere.setPosition(200, 200, 0);
    msphere.setRadius(300);
    
    // mcam.setPosition(ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 300));
    
    // ofVec3f position;
    // position.x, position.y, position.z
    // mcam.setPosition(position);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<NUM; i++){
        custombox[i].update();
    }
    ofVec3f cam_pos = ofVec3f(sin(ofGetElapsedTimef()),
                              0,
                              cos(ofGetElapsedTimef()));
    cam_pos *= 1000;
    mcam.setPosition(box_position[0]+ cam_pos);
    mcam.lookAt(box_position[1]);
}

//--------------------------------------------------------------
void ofApp::draw(){
    mcam.begin();
    for(int i = 0; i < NUM; i++){
        custombox[i].draw();
    }
    msphere.drawWireframe();
    mcam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
