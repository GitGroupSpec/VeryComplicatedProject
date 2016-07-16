
#include "calculator.h"

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


double SimpleCalculator::sum(double a, double b) {
    double c = a + b;
    return c;
}

double SimpleCalculator::sub(double a, double b) {
    double c = a - b;
    return c;
}

///////////////////////////////////////////////////////////////////////////////

// End of the file



