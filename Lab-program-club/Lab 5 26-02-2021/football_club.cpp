#include <iostream>
#include "football_club.h"

using namespace std;

int main()
{
    FootballClub FBC;

    FBC.setClubName("Galway United");               // Sets Value to move to Class Football Club "Club Name"
    FBC.setDistrict("Galway");                      // Sets Value to move to Class Football Club "District"
    FBC.setStripColour("Maroon and White");         // Sets Value to move to Class Football Club "Strip Colour"

    FBC.getClubName();                              // Calls getClubName Function in Class Football Club to Retrieve Value in Private
    FBC.printInfo(FBC.getClubName());               // Calls PrintInfo Function in Class Football Club and prints value to terminal

    FBC.getDistrict();                              // Calls getDistrict Function in Class Football Club to Retrieve Value in Private
    FBC.printInfo(FBC.getDistrict());               // Calls PrintInfo Function in Class Football Club and prints value to terminal

    FBC.getStripColour();                           // Calls getStripColour Function in Class Football Club to Retrieve Value in Private
    FBC.printInfo(FBC.getStripColour());            // Calls PrintInfo Function in Class Football Club and prints value to terminal

    return 0;
}
