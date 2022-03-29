/* 
    CH-230-A
    a10_p5
    Critter.h
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
    
    public:
        // setters
        void setname(string& name);
        void sethunger(int hunger);
        void setboredom(int boredom);
        void setheight(double height);

        // getters
        string getname();
        int gethunger();
        int getboredom();
        double getheight();
        
        // constructors
        Critter();
        Critter(string);
        Critter(string, int, int, double = 10); // height is unnecessary
        
        // print
        void print();

        // added these
        double gethungerd(int);
        int gethungeri();
};