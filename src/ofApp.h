#pragma once

#include "ofMain.h"
#include <vector>

class ofApp : public ofBaseApp {

public:
	void setup() override;
	void update() override;
	void draw() override;

	void mousePressed(int x, int y, int button) override;

	int numberOfRows = 4;
	int numberOfColumns = 4;
	float horizontalSpacing = 0;
	float verticalSpacing = 0;
};
