/* 
    CH-230-A
    a10_p3
    City.h.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <string>
using namespace std;

class City {
    private:
        // parameters
        string name;
        int inhab;
        string mayor;
        double area;
    
    public:
        // setters
        void setName(string& newname);
        void setInhab(int newinhab);
        void setMayor(string& newmayor);
        void setArea(double newarea);
        // getters
        string getName();
        int getInhab();
        string getMayor();
        double getArea();
        // service method
        void print();
};