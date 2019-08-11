//
// Aidar Kurmanbek-Uulu 10/27/2018
//
// Dragon.h
// 
// Dragon class which draws Dragon curves by calling its methods recursively using Turtle.
// 
// Starts from a base segment, replaces each segment by two segments with a right angle 
// & with a rotation of 45 degrees alternatively to the right and to the left.

// Assumptions:
//   All parameters and data members are float.
//   Functions take two arguments: the depth of level and the length of each line segment.
//   Outputs are in postscript format.


#ifndef TurtleDragon
#define TurtleDragon

#include <stdio.h>
#include "Turtle.h"
#include <iostream>
#include <math.h>

using namespace std;

class Dragon : Turtle {
public:
   
    Dragon( float initX=0.0, float initY=0.0, float initAngle=0.0 );
    void leftCurve( int l, float d );  //draw a level-l left curve with dist d
    void rightCurve( int l, float d ); //draw a level-l right curve with dist d
};

#endif /* defined(TurtleDragon) */
