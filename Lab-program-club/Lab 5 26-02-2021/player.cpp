#include <iostream>
#include "player.h"

using namespace std;

int main()
{
    Player Ply;

    Ply.setName("Jack","Hill");                     // Sets Value to move to Class Player "Forename"
    Ply.setPosition("MidField");                    // Sets Value to move to Class Player "Position"
    Ply.setMobileNumber(8712345678);                // Sets Value to move to Class Player "Mobile Number"

    Ply.getName();                                  // Calls getName Function in Class Player to Retrieve Value in Private
    Ply.printInfo(Ply.getName());                   // Calls PrintInfo Function in Class Player and prints value to terminal

    Ply.getPosition();                              // Calls getPosition Function in Class Player to Retrieve Value in Private
    Ply.printInfo(Ply.getPosition());               // Calls PrintInfo Function in Class Player and prints value to terminal

    Ply.getMobileNumber();                          // Calls getMobileNumber Function in Class Player to Retrieve Value in Private
    Ply.printInfo(Ply.getMobileNumber());           // Calls PrintInfo Function in Class Player and prints value to terminal

    return 0;
}
