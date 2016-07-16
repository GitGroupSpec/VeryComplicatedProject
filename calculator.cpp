
#include "calculator.h"

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
            // std::cout << "division by zero";
             return 0;
           }
}
double SimpleCalculator::sum(double a, double b) {
    double c = a + b;
    return c;
}
double SimpleCalculator::mult(const double left_param, const double right_param) {
    return left_param + right_param;
}
double SimpleCalculator::modulo(const double x, const double y)
{
    return (int)x%(int)y;
}
int SimpleCalculator::modulo(const int x, const int y)
{
    return x%y;
}

double SimpleCalculator::sub(double a, double b) {
    double c = a - b;
    return c;
}

unsigned char is_number( char inp){
 if ((inp >= '0') && (inp <= '9')){
  return 1;
 } else return 0;
}
 double SimpleCalculator::get_atom(void){
   int i;
   std::string tmp_str;
   tmp_str.clear();
   for (i = index; i < expr.length(); i++){
     if (is_number(expr[i])){
                            tmp_str+= expr[i];
                            } else {
                                     index = i;
                                     break; 
                                   }                            
   } 
  if (!tmp_str.empty()){        
      return atof(tmp_str.c_str());
  } else {
    return 0;       
  }
                                
}
       
///////////////////////////////////////////////////////////////////////////////

// End of the file



