#include <vector>
#include <algorithm>
#include "GraphStructure.h"


int main(){
    Mat input = imread("F:/test.png");
	input.convertTo(input, CV_8UC3);
    GraphStructure gs(input);
	//Rect rec(0, input.rows / 2,  input.cols, input.rows / 2);
	//Mat image = input(rec);
	//imshow("image", image);
	//waitKey(0);
    gs.getMask();
    gs.getAnchors();
	
	//DrawAnchorPoints(gs.image_with_mask, gs.sample_anchors[0],gs.unknown_anchors[0], gs.points[0]);
	//DrawAnchorPoints(gs.image_with_mask, gs.sample_anchors[1], gs.unknown_anchors[1], gs.points[1]);
	
	gs.DrawNewStructure();
	getchar();//for debug
	return 0;
}
