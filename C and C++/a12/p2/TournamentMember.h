/* 
    CH-230-A
    a12_p2
    TournamentMember.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstring>

class TournamentMember {
    private:
        // parameters
        char firstname[36];
        char lastname[36];
        char birthdate[11];
        static std::string location;
        int height;
        int weight;

    public:
        // constructors
        TournamentMember() { std::cout << "calling empty constructor.\n"; };
        TournamentMember(const char*, const char*, const char*, int, int);
        ~TournamentMember() { std::cout << "destructor being called.\n"; };
        TournamentMember(const TournamentMember&);

        // setters
        void setfirstname(char* firstname) {strcpy(this->firstname,firstname);}
        void setlastname(char* lastname) {strcpy(this->lastname,lastname);}
        void setbirthdate(char* birthdate) {strcpy(this->birthdate,birthdate);}
        void setlocation(std::string location) { this->location = location; }
        void setheight(int height) { this->height = height; }
        void setweight(int weight) { this->weight = weight; }

        // getters
        const char* getfirstname() const { return firstname; }
        const char* getlastname() const { return lastname; }
        const char* getbirthdate() const { return birthdate; }
        std::string getlocation() const { return location; }
        int getheight() const { return height; }
        int getweight() const { return weight; }

        // methods
        void printinfo() const;
        static void changeloc(std::string location);
};