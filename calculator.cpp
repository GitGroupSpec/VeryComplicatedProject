
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

double SimpleCalculator::modulo(const double x, const double y)
{
    return (int)x%(int)y;
}
int SimpleCalculator::modulo(const int x, const int y)
{
    return x%y;
}

///////////////////////////////////////////////////////////////////////////////

// End of the file



