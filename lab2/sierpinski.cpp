// sierpinski member function definitions
#include "sierpinski.h"

const int RIGHT = -60;
const int LEFT = 60;

//------------------------- Sierpinski Arrowhead ----------------------------
Sierpinski::Sierpinski( float initX, float initY, float initAngle ) 
  : Turtle( initX, initY, initAngle ) {
}

//------------------------------ leftCurve ----------------------------------
// draw a level-l left curve with dist d
void Sierpinski::leftCurve( int level, float d ) {
  if ( level > 0 ) {
    rightCurve(level - 1, d);
    turn(LEFT);
    leftCurve(level - 1, d);
    turn(LEFT);
    rightCurve(level - 1, d);
  }
  else
    draw( d );
}

//------------------------------ rightCurve ---------------------------------
// draw a level-l right curve with dist d
void Sierpinski::rightCurve( int level, float d ) {
  if ( level > 0 ) {
    leftCurve(level - 1, d);
    turn(RIGHT);
    rightCurve(level - 1, d);
    turn(RIGHT);
    leftCurve(level - 1, d);
  }
  else
    draw( d );
}
