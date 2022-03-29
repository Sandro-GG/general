/* 
    CH-230-A
    a11_p1
    Box.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

class Box {
    private:
        // dimensions
        double height;
        double width;
        double depth;

    public:
        // setters
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);
        // getters
        double getHeight();
        double getWidth();
        double getDepth();
        // print volume
        void printvol();
        // constructors        
        Box();
        Box(double, double, double);
        Box(Box &b); // copy
        // destructor
        ~Box();        
};