
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

///////////////////////////////////////////////////////////////////////////////

// End of the file



