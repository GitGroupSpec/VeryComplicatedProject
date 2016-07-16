#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

///////////////////////////////////////////////////////////////////////////////

#include <string>

using std::string;

/*! Available binary operation types.  */
enum CalculatorOperation {ADD, SUB, MULT, DIV, MODULO, UNDEF, NAN};

class BaseCalculator {
public:
    BaseCalculator();
    virtual ~BaseCalculator();

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

    // -------------------------------------------------------------------------
   	double sub(double a, double b);
            
    /*! Misha:  naive version of add function. Uses operator+ (,) from std */
    double mult(const double left_param, const double right_param);
    
    double sum(double a, double b);
    
    double div(const double numerator, const double denominator); 
    
    double modulo(const double x, const double y);
    int modulo(const int x, const int y);

    // -------------------------------------------------------------------------

    /*! For a given index evaluate type of the binary operation. */
    enum CalculatorOperation get_operation(const int index);
    
private:
    std::string expr;
    int index;

      // TO DO
      // .. add something
};



///////////////////////////////////////////////////////////////////////////////

#endif

// End of the file



