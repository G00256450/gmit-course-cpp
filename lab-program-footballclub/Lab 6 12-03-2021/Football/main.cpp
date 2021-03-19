#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>
#include <string>
#include <sstream>
#include "football_club.h"
#include "player.h"

using namespace std;

int main(){
    int MaxTeam=15;
    int MaxSquad=40;
    int MenuSelector;
    string FileSquad = "Squad_Details.csv";
    string FileTeam = "Team_Details.csv";
    bool LoopMenu=true;

    Player Squad[MaxSquad];
    Player Team[MaxTeam];

    FootballClub FBC;
    Player Ply;

    while (LoopMenu==true){
    cout<< "   List of Programs\n\n";
    cout<< " 1) Set Club Information"<<endl;
    cout<< " 2) Print Club Name to Screen"<<endl;
    cout<< " 3) Print District Name to Screen"<<endl;
    cout<< " 4) Print Strip Colour to Screen"<<endl;
    cout<< " 5) Input New Data for Squad to Memory (Overwrite)"<<endl;
    cout<< " 6) Write Data in Memory to Squad CSV File"<<endl;
    cout<< " 7) Print Squad Data from Memory"<<endl;
    cout<< " 8) Read Data from Squad CSV File"<<endl;
    cout<< " 9) Save Data from Squad CSV File To Memory"<<endl;
    cout<< "10) Add Players on squad to team (Memory)"<<endl;
    cout<< "11) Print Team Data from Memory"<<endl;
    cout<< "12) Write Data in Memory to Team CSV File"<<endl;
    cout<< "13) Read Data from Team CSV File"<<endl;
    cout<< "14) Save Data from Team CSV File To Memory"<<endl;
    cout<< "15) Modify a players info in Memory"<<endl;
    cout<< "16) Exit Program"<<endl;
    cout<<endl;
    cout<< "What Program do you wish to run? ";
    cin>>MenuSelector;
    cout<<endl;

    switch (MenuSelector) {
          case 1:
            FBC.setClubInfo("Galway United", "Galway", "Maroon and White");
            cout << "Club Information Set!\n\n";
            break;
          case 2:
            FBC.printInfo(FBC.getClubName());
            cout << "Club name printed to screen!\n\n";
            break;
          case 3:
            FBC.printInfo(FBC.getDistrict());
            cout << "District name printed to screen!\n\n";
            break;
          case 4:
            FBC.printInfo(FBC.getStripColour());
            cout << "Strip Colour printed to screen!\n\n";
            break;
          case 5:
            FBC.InputSquadData(MaxSquad);
            cout << "Squad Data Saved to Memory\n\n";
            break;
          case 6:
            FBC.WriteToSquadCSV(MaxSquad);
            cout << "Data Saved to Squad CSV File\n\n";
            break;
          case 7:
            FBC.PrintSquadInfo(MaxSquad);
            cout << "Data Printed from Memory\n\n";
            break;
          case 8:
            FBC.Read_Line(FileSquad);
            cout << "Data Read from Squad CSV File\n\n";
            break;
          case 9:
            FBC.StoreDatafromSquadCSVtoMemory();
            cout << "Data Saved from CSV File to Memory\n\n";
            break;
          case 10:
            FBC.InputTeamData(MaxTeam,MaxSquad);
            cout << "Team Data saved to Memory\n\n";
            break;
          case 11:
            FBC.PrintTeamInfo(MaxTeam);
            cout << "Printed Team Data from Memory\n\n";
            break;
          case 12:
            FBC.WriteToTeamCSV(MaxTeam);
            cout << "Data Saved to Team CSV File\n\n";
            break;
          case 13:
            FBC.Read_Line(FileTeam);
            cout << "Data Read from Team CSV File\n\n";
            break;
          case 14:
            FBC.StoreDatafromTeamCSVtoMemory();
            cout << "Data Saved from Team CSV File to Memory\n\n";
            break;
          case 15:
            FBC.ModifySquadData(MaxSquad);
            cout << "Player Data has been stored to Memory\n\n";
            break;
          case 16:
            LoopMenu=false;
            break;
        }
    }
    return 0;
}
