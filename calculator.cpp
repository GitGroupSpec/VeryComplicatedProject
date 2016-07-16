
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

double SimpleCalculator::mult(const double left_param, const double right_param) {
    return left_param + right_param;       
}

///////////////////////////////////////////////////////////////////////////////

// End of the file



