#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    ofSetCircleResolution(100);
    
    x = 100;
    y = 100;
    speed_x = 5;
    speed_y = 5;
    mode = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + speed_x;
    y = y + speed_y;
    
    if(x > ofGetWidth() - 100 || x < 100){
        speed_x *= -1;
    }
    if(y > ofGetHeight() - 100 || y < 100){
        speed_y *= -1;
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(mode%2 == 0){
    ofBackground(100, 100, 100);
    }
    if(mode%2 == 1){
        ofBackground(255, 255, 60, 200);
    }
    
    ofSetColor(255, 255, 255, 255);
    ofSetLineWidth(2);
    
    int a = 0;
    for(int i=0; i<7; i++){
        a = a + ofGetWidth()/8;
        ofDrawLine(a, 0, a, ofGetHeight());
    }
    
    int b = 0;
    for(int j=0; j<5; j++){
        b = b + ofGetHeight()/6;
        ofDrawLine(0, b, ofGetWidth(), b);
    }

  
    ofSetLineWidth(5);
    
    
    
    
    ofSetColor(30, 200, 255, 200);
    ofDrawCircle(x, y, 100);
    
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(45);
    
    ofSetColor(60, 255, 30);
    ofDrawRectangle(-150, -150, 300, 300);
    
    ofPopMatrix();
    
    


   
    
  }
    


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a'){
        speed_x *= 2;
        speed_y *= 2;
    }
    
    if (key == 'b'){
        speed_x = speed_x/2;
        speed_y = speed_y/2;
    }
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
    mode +=1;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
