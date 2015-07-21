#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    mainOutputSyphonServer.setName("Screen Outputh");
    mClient.setup();
    mClient.setApplicationName("Simple Serverh");
    mClient.setServerName("");
    
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    
    for (int i = 0; i <= movieNum; i++) {
        ofVideoPlayer *video = new ofVideoPlayer;
        video->setPixelFormat(OF_PIXELS_RGBA);
        video->loadMovie(ofToString(i) + ".mov");
        video->setLoopState(OF_LOOP_NONE);
        
        players.push_back(*video);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i <= movieNum; i++) {
        players[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i <= movieNum; i++) {
        players[i].draw(0,0, ofGetWidth(), ofGetHeight());
    }
    
    mClient.draw(50, 50);
    mainOutputSyphonServer.publishScreen();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '0') {
        players[0].play();
    }
    if (key == '1') {
        players[1].play();
    }
    
    if (key == '2') {
        players[2].play();
    }
    
    if (key == '3') {
        players[3].play();

    }
    
    if (key == '4') {
        players[4].play();
        
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
