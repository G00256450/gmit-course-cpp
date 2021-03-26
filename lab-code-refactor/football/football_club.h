#include <iostream>

using namespace std;

#include "player.h"

class FootballClub{
private:

    string clubname;
    string district;
    string stripColour;
    string manager;

    // const static int , way to make a constant variable in a class
    const static int MAXSQUAD = 23;
    const static int MAXTEAM = 15;
    Player squad[MAXSQUAD];

public:

    //contructor
    FootballClub();
    FootballClub(string clubname, string district);

    string getClubname();
    string getDistrict();

    //void setManager(string manager);/////////////////////////////////////////////////////
    void setClubname(string clubname);
    void setDistrictname(string district);
    void printInfo();


    void addPlayerToSquad(Player tmp, int position);
    void addPlayerToTeam(Player tempPlayer,int ID);

    void printTeam();
    void printSquad();

};

