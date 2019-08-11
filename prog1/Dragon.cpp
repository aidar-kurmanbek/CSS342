//
// Aidar Kurmanbek-Uulu 10/27/2018
//
// Dragon.cpp
//  
// Dragon class which draws Dragon curves by calling its methods recursively using Turtle
//
//

#include "Dragon.h"
//------------------------- Dragon -----------------------------------------
Dragon::Dragon( float initX, float initY, float initAngle )
: Turtle( initX, initY, initAngle ) {
}

//------------------------------ leftCurve ----------------------------------
// draw a level-k left curve with dist d
void Dragon::leftCurve( int level, float d ) {
    if ( level > 0 ) {
        leftCurve(level-1, d);
        turn(90);
        rightCurve(level-1, d);
        turn(90);
        
 
    }
    else
        draw( d );
}

//------------------------------ rightCurve ---------------------------------
// draw a level-k right curve with dist d
void Dragon::rightCurve( int level, float d ) {
    if ( level > 0 ) {
        turn(-90);
        leftCurve(level-1, d);
        turn(-90);
        rightCurve(level-1, d);
   
    }
    else
        draw( d );
}