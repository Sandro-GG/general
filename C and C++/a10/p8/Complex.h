/* 
    CH-230-A
    a10_p8
    Complex.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

class Complex {
    private:
        float real; // real part
        float imag; // imaginary part
        
    public:
        // setters
        void setReal(float newreal);
        void setImag(float newimag);
        // getters
        float getReal();
        float getImag();        
        // constructors
        Complex();
        Complex(float newreal, float newimag);
        // destructor
        ~Complex();
        // printer
        void print();
        // methods
        Complex conjugate();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};