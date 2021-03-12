#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

#include "player.h"

using namespace std;

class FootballClub{
    private:
        string ClubName;                                // Stores ClubName
        string District;                                // Stores District
        string StripColour;                             // Stores StripeColour

        Player Squad[2];
        Player Team[2];

    public:
        void printInfo(string Varible){                 // Prints Varible to terminal
            cout<<Varible<<endl;
            }

        void setClubInfo(string ClubName, string District, string StripColour){              // Sets Value for ClubName using Constructor
            this->ClubName=ClubName;
            this->District=District;
            this->StripColour=StripColour;
        }

        string getClubName(){                           // Gets Value for ClubName from Private
            return ClubName;
        }

        string getDistrict(){                           // Gets Value for District from Private
            return District;
            }

        string getStripColour(){                        // Gets Value for StripColour from Private
            return StripColour;
            }

        void InputSquadData(int MaxSquad){
            cout<<"\nEnter the following details for all "<<MaxSquad<<" Players!\n";
            for (int i=0;i<MaxSquad;i++){
                string tempFirstName;
                string tempSecondName;
                string tempFieldPosition;
                string tempMobileNumber;
                cout<<"\nEnter a forename for player "<< i+1 << " : ";
                getline(cin,tempFirstName);
                cout<<"Enter a surname player "<< i+1 << " : ";
                getline(cin,tempSecondName);
                cout<<"Enter the field position of player "<< i+1 << " : ";
                getline(cin,tempFieldPosition);
                cout<<"Enter a Mobile Number for player "<< i+1 << " : ";
                getline(cin,tempMobileNumber);
                Squad[i].setName(tempFirstName,tempSecondName);
                Squad[i].setPosition(tempFieldPosition);
                Squad[i].setMobileNumber(tempMobileNumber);
            }
         }

         void WriteToCSV(int MaxSquad){
            ofstream fout;
            fout.open("Squad_Details.csv", ios::out);
            fout<<" Line # "<<","<<" First Name "<<","<<" Second Name "<<","<<" Field Position "<<","<<" Mobile Number "<<endl;
            for (int i=0;i<MaxSquad;i++){
                fout<<i+1<<","<<Squad[i].getForename()<<","<<Squad[i].getSurname()<<","<<Squad[i].getPosition()<<","<<Squad[i].getMobileNumber()<<endl;
            }
            fout.close();
            cout<<"\nFile Created successfully!"<<endl;
         }

         void DisplayContentCSV(int MaxSquad){
            fstream fin;
            string data;
            cout<<"\n\nDisplaying the content of CSV file\n\n";
            fin.open("Squad_Details.csv", ios::in);
            for(int i=0; i<=MaxSquad; i++){
                getline(fin,data);
                cout<<data<<"\n";
            }
            cout<<"\n\n";

        }

        void PrintSquadInfo(int MaxSquad){
            for (int i=0;i<MaxSquad;i++){
                cout<<"Player "<<i+1<<" Details!\n\n";
                cout<<"Player Forename : ";
                Squad[i].printInfo(Squad[i].getForename());
                cout<<"Player Surname : ";
                Squad[i].printInfo(Squad[i].getSurname());
                cout<<"Field Position : ";
                Squad[i].printInfo(Squad[i].getPosition());
                cout<<"Player Mobile Number : ";
                Squad[i].printInfo(Squad[i].getMobileNumber());
                cout<<"\n\n";
            }
        }
};


#endif // FOOTBALL_CLUB_H_INCLUDED
