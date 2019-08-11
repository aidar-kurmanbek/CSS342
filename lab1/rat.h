// a Rational object holds one Rational number, one fraction

#ifndef RAT_H
#define RAT_H
#include <iostream>
using namespace std;

class Rational {     
friend ostream& operator<< (ostream& output, const Rational & r);                      // not fully commented
friend istream& operator>> (istream& input, Rational & r);
public:

	int getNumerator() const;
   int getDenominator() const;
   
   Rational(int = 0, int = 1);             // default constructor
   Rational(int, int);                              
   Rational(int, int = 0);
   
   Rational operator+(const Rational &) const;
   Rational operator-(const Rational &) const;
   Rational operator*(const Rational &) const;
   Rational operator/(const Rational &) const;
   bool Rational operator>(const Rational &) const;
   bool Rational operator<(const Rational &) const;
   bool operator>=(const Rational &) const;
   bool operator==(const Rational &) const;
   bool operator!=(const Rational &) const;
   Rational& operator+=(const Rational &);
   void printRational();
   void printRationalAsFloat();
private:
   int numerator;
   int denominator;

   void reduce();                 // utility function, reduce to lowest terms
};

#endif

