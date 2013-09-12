//
//  Light.h
//  LightGameXCode
//
//  Created by Chris Rice on 9/12/13.
//  Copyright (c) 2013 Chris Rice. All rights reserved.
//

#ifndef LightGameXCode_Light_h
#define LightGameXCode_Light_h

#include <vector>
#include "GridSquare.h"
#include <cstdlib>

using namespace std;
class Light {
public:
	Light();
	void propogate();
    void displayLight();
    
private:
    int xdir, ydir;
	vector<GridSquare> beam;
};

#endif