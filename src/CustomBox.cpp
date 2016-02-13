//
//  CustomBox.cpp
//  second_day
//
//  Created by Yamamoto Kenta on 2016/02/13.
//
//

#include "CustomBox.h"

void CustomBox::init(){
        box_speed = ofVec3f(ofRandom(ofGetWidth()),
                            ofRandom(ofGetHeight()),
                            ofRandom(-500, 500));
        
        box_speed = ofVec3f(ofRandom(-2,2), ofRandom(-2,2), ofRandom(-2,2));
        
        mbox.setPosition(box_position);
        mcolor.setHsb(ofRandom(255), 150, 200);
}

void CustomBox::update(){
        box_position = box_position + box_speed;
        mbox.setPosition(box_position);
        
        if(box_position.x < 0 || box_position.x > ofGetWidth()){
            box_speed.x *= -1;
        }
        if(box_position.y < 0 || box_position.y > ofGetHeight()){
            box_speed.y *= -1;
        }
        if(box_position.z < -500 || box_position.z > 500){
            box_speed.z *= -1;
        }
}

void CustomBox::draw(){
        ofSetColor(mcolor);
        mbox.drawWireframe();
}