
#include "calculator.h"
#include <iostream>
#include <cstdlib>



///////////////////////////////////////////////////////////////////////////////
    
BaseCalculator::BaseCalculator(){}
       
BaseCalculator::~BaseCalculator() {
}       
                                  
///////////////////////////////////////////////////////////////////////////////                               
    
SimpleCalculator::SimpleCalculator():
BaseCalculator() {

}                                                       
    
SimpleCalculator::~SimpleCalculator() {
}    
    
//virtual 
double SimpleCalculator::calc(const std::string & inp_string ) {
    return 0;
}

double  SimpleCalculator::div(const double numerator, const double denominator){
    if (denominator != 0){
                    return numerator/denominator;
    } else {
             //throw "division by zero";
             std::cout << "division by zero";    
             return 0;    
           }

double SimpleCalculator::sum(double a, double b) {
    double c = a + b;
    return c;

double SimpleCalculator::mult(const double left_param, const double right_param) {
    return left_param + right_param;       
}

///////////////////////////////////////////////////////////////////////////////

// End of the file



