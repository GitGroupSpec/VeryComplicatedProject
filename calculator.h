#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

///////////////////////////////////////////////////////////////////////////////

#include <string>

using std::string;

class BaseCalculator {
public:      
    BaseCalculator();
    virtual ~BaseCalculator() = 0;
    
    /*! Universal method to calc arbitrary expression */
    virtual double calc(const string & input_expresseion) = 0;
    
private:    
      
      // TO DO 
      // .. add something
};

///////////////////////////////////////////////////////////////////////////////

class SimpleCalculator : public BaseCalculator {
public:      
    SimpleCalculator();
    virtual ~SimpleCalculator();
    
    /*! Universal method to calc arbitrary expression */
    virtual double calc(const string & );

private:
            
    /*! Misha:  naive version of add function. Uses operator+ (,) from std */
    double mult(const double left_param, const double right_param);
    
      
      // TO DO 
      // .. add something
};

///////////////////////////////////////////////////////////////////////////////

#endif

// End of the file



