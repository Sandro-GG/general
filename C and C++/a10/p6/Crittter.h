/* 
    CH-230-A
    a10_p6
    Crittter.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter {
    private:
        // parameters
        string name;
        int hunger;
        int boredom;
        double height;
        double thirst; // added new parameter
    
    public:
        // setters
        void setname(string& name);
        void sethunger(int hunger);
        void setboredom(int boredom);
        void setheight(double height);
        void setthirst(double thirst);

        // getters
        string getname();
        int gethunger();
        int getboredom();
        double getheight();
        double getthirst();
        
        // constructors
        Critter();
        Critter(string);
        Critter(string, int, int, double = 10); // height is unnecessary
        Critter(string, int, int, double, double); // new critter
        
        // print
        void print();

        double gethungerd(int);
        int gethungeri();
};