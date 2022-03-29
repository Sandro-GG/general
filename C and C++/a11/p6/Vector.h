/* 
    CH-230-A
    a11_p6
    Vector.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

class Vector {
    private:
        int size;
        double *comp;

    public:
        // constructors
        Vector();
        Vector(int, double*&);
        Vector(Vector&);
        ~Vector();
        // setters
        void setSize(int nsize);
        void setComp(double*& ncomp);
        // getters
        int getSize() const;
        double* getComp() const;
        //methods
        void print() const;
        double norm() const;
        Vector add(const Vector& v) const;
        Vector diff(const Vector& v) const;
        double scalProd(const Vector& v) const;
};