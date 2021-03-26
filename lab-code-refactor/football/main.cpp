#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"


int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");

    string clubName = club.getClubname();
    clubName = club.getDistrict();
    cout << clubName<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, playing;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>playing)){
            break;
        }
        else{
            cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<" "<<playing<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            playerTemp.setPlaying(playing);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();


    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    cout<<"TEAM"<<endl;
    club.printTeam();




    return 0;
}
