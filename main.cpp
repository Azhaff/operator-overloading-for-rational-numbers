#include <iostream>
#include <cmath>
#include "Rational.h"
using namespace std;
int main()
{

    Rational a(2, 3); 
    Rational b(4, 7); 
    Rational c;       

    c.setNumerator(3);
    c.setDenominator(4);
    cout << "c = " << c.getNumerator() << "/" << c.getDenominator() << endl; // Should print "c = 3/4"

    // checking operator overloaders
    cout << "a + b = " << a + b << endl; 
    cout << "a - b = " << a - b << endl; 
    cout << "a * b = " << a * b << endl; 
    cout << "a / b = " << a / b << endl; 

    // checking comparison functions
    cout << "a == b: " << (a == b) << endl; 
    cout << "a != b: " << (a != b) << endl; 
    cout << "a > b: " << (a > b) << endl;   
    cout << "a < b: " << (a < b) << endl;   
    cout << "a >= b: " << (a >= b) << endl; 
    cout << "a <= b: " << (a <= b) << endl; 

    // checking unary operator overloaders
    cout << "++a: " << ++a << endl;         
    cout << "--a: " << --a << endl;              
    cout << "-a: " << -a << endl;                  
    cout << "+a: " << +a << endl;                    
    cout << "!a: " << !a << endl;                     
    cout << "!c: " << !c << endl;                     
    cout << "!Rational(0): " << !Rational(0) << endl; 

    // Test assignment operators
    a += b;
    cout << "a += b: " << a << endl; 
    a -= b;
    cout << "a -= b: " << a << endl;
    a *= b;
    cout << "a *= b: " << a << endl; 
    a /= b;
    cout << "a /= b: " << a << endl;

    // Test static member function
    cout << "Instance count: " << Rational::getInstanceCount() << endl; 

}
