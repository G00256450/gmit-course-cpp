#include <iostream>
#include <fstream>
#include "football_club.h"
#include "player.h"

using namespace std;

int main(){

    int MaxTeam=2;
    int MaxSquad=2;

    Player Squad[MaxSquad];
    Player Team[MaxTeam];

    FootballClub FBC;
    Player Ply;

    FBC.setClubInfo("Galway United", "Galway", "Maroon and White"); // Sets Valuec to move to Class Football Club "Club Info"

    FBC.printInfo(FBC.getClubName());               // Calls PrintInfo Function in Class Football Club and prints value to terminal
    FBC.printInfo(FBC.getDistrict());               // Calls PrintInfo Function in Class Football Club and prints value to terminal
    FBC.printInfo(FBC.getStripColour());            // Calls PrintInfo Function in Class Football Club and prints value to terminal

    FBC.InputSquadData(MaxSquad);
    FBC.WriteToCSV(MaxSquad);
    FBC.DisplayContentCSV(MaxSquad);
    FBC.PrintSquadInfo(MaxSquad);

    return 0;
}
