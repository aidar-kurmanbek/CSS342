// a Rational object holds one Rational number, one fraction
#include "rat.h"

//------------------------------ Rational ------------------------------------
// default constructor:  parameters are numerator and denominator respectively
// if the number is negative, the negative is always stored in the numerator
Rational::Rational(int n, int d) {
   numerator = d < 0 ? -n : n;
   denominator = d < 0 ? -d : d;
   reduce();
}

//--------------------------------- add --------------------------------------
// overloaded +: addition of 2 Rationals, current object and parameter
Rational Rational::operator+(const Rational& a) const {
   Rational t;

   t.numerator = a.numerator * denominator + a.denominator * numerator;
   t.denominator = a.denominator * denominator;
   t.reduce();

   return t;
}

//------------------------------ subtract ------------------------------------
// subtraction of 2 Rationals, current object and parameter

Rational Rational::operator-(const Rational& s) const {
   Rational t;

   t.numerator = s.denominator * numerator - denominator * s.numerator;
   t.denominator = s.denominator * denominator;
   t.reduce();

   return t;
}

//------------------------------ multiply ------------------------------------
// multiplication of 2 Rationals, current object and parameter
Rational Rational::operator*(const Rational& m) const{
   Rational t;

   t.numerator = m.numerator * numerator;
   t.denominator = m.denominator * denominator;
   t.reduce();

   return t;
}

//-------------------------------- divide ------------------------------------
// division of 2 Rationals, current object and parameter,
// division by zero crashes
Rational Rational::operator/(const Rational& v) const{
   Rational t;

   t.numerator = v.denominator * numerator;
   t.denominator = denominator * v.numerator;
   t.reduce();

   return t;
}
//--------------------------------- < ------------------------------------------------
// less than
bool Rational::operator<(const Rational &o) {

    if(((double)numerator/(double)denominator) > ((double)o.numerator/(double)o.denominator)){
        return false;
    } else{
        return true;
    }

}
//-------------------------------- > -----------------------------------------------------
// more than
bool Rational::operator>(const Rational &p) {

    if(((double)numerator/(double)denominator) > ((double)p.numerator/(double)p.denominator)){
        return true;
    } else{
        return false;
    }

}

ostream& operator<<(ostream& output, const Rational& r) {
if (r.denominator == 0)
output << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
else if (r.numerator == 0)
output << 0;
else if (r.numerator == r.denominator)
output << 1;
else
output << r.numerator << "/" << r.denominator;
}

istream& operator>>(istream& input, Rational& r) {
    input >> r.numerator >> r.denominator;
    r.printRational();
Cout<< endl;
}

//---------------------------- printRational ---------------------------------
void Rational::printRational() {
   if (denominator == 0)
      cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
   else if (numerator == 0)
      cout << 0;
   else
      cout << numerator << "/" << denominator;
}

//------------------------ printRationalAsFloat ------------------------------
void Rational::printRationalAsFloat() {  
   if (denominator == 0)
      cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
   else
      cout << float(numerator) / float(denominator);
}

//-------------------------------- reduce ------------------------------------
// reduce fraction to lowest terms
void Rational::reduce() {
   int n = numerator < 0 ? -numerator : numerator;
   int d = denominator;
   int largest = n > d ? n : d;

   int gcd = 0;                                 // greatest common divisor

   for (int loop = largest; loop >= 2; loop--)
      if (numerator % loop == 0 && denominator % loop == 0) {
         gcd = loop;
         break;
      }

   if (gcd != 0) {
      numerator /= gcd;
      denominator /= gcd;
   }
   
int numerator::getNumerator(){
    return numerator;
}

int denominator::getDenomimator(){
    return denominator;
}
}

