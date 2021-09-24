#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	// Set the window title.
	ofSetWindowTitle("Grid Cakes");
	// Set the width and height of the window.
	ofSetWindowShape(400, 500);
}

//--------------------------------------------------------------
void ofApp::update() {
	// Calculate the height and width of pixels based on the screen dimensions.
	// Casting to float is required so that we don't lose precision with integer math.
	horizontalSpacing = static_cast<float>(ofGetHeight()) / numberOfRows;
	verticalSpacing = static_cast<float>(ofGetWidth()) / numberOfColumns;
}

//--------------------------------------------------------------
void ofApp::draw() {

	// Draw the horizontal lines.
	for (int row = 0; row <= numberOfRows; ++row) {
		ofDrawLine(0, row * horizontalSpacing, ofGetWidth(), row * horizontalSpacing);
	}

	// Draw the vertical lines.
	for (int column = 0; column <= numberOfColumns; ++column) {
		ofDrawLine(column * verticalSpacing, 0, column * verticalSpacing, ofGetHeight());
	}
}

//--------------------------------------------------------------
// This function will run anytime the user clicks a mouse button.
void ofApp::mousePressed(int x, int y, int button) {
	if (button == 0) {
		// The left button was clicked. Increase column count.
		++numberOfColumns;
	} else if (button == 2) {
		// The right button was clicked. Increase row count.
		++numberOfRows;
	} else if (button == 1) {
		// The middle button was clicked. Reset column and row count.
		numberOfColumns = 4;
		numberOfRows = 4;
	}
}
