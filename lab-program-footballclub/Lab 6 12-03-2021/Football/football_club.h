#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

#include "player.h"

using namespace std;

class FootballClub{
    private:
        string ClubName;                                // Stores ClubName
        string District;                                // Stores District
        string StripColour;                             // Stores StripeColour

        Player Squad[40];
        Player Team[15];

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
                cin.sync();
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

         void InputTeamData(int MaxTeam,int MaxSquad){
            PrintSquadInfo(MaxSquad);
            cout<<"\n\nSelect "<<MaxTeam<<" Players to play on the team!\n";
            for (int i=0;i<MaxTeam;i++){
                string tempFirstName;
                string tempSecondName;
                string tempFieldPosition;
                string tempMobileNumber;
                int PlayerNumber;
                cout<<"Enter the number for player "<< i+1 <<" you wish to add to the team : ";
                cin>>PlayerNumber;
                for (int i=0;i!=PlayerNumber;i++){
                    tempFirstName = Squad[i].getForename();
                    tempSecondName = Squad[i].getSurname();
                    tempFieldPosition = Squad[i].getPosition();
                    tempMobileNumber = Squad[i].getMobileNumber();
                }
                Team[i].setName(tempFirstName,tempSecondName);
                Team[i].setPosition(tempFieldPosition);
                Team[i].setMobileNumber(tempMobileNumber);
            }
         }


         void ModifySquadData(int MaxSquad){
            PrintSquadInfo(MaxSquad);
            cout<<"\n\nHere you can modify a players details or replace a player!\n";
            string tempFirstName;
            string tempSecondName;
            string tempFieldPosition;
            string tempMobileNumber;
            int PlayerNumber;
            cout<<"Enter the number for the player you wish to modify/replace : ";
            cin>>PlayerNumber;
            cout<<"Modifying Details for player number "<<PlayerNumber<<"!\n\n";
            cin.sync();
            cout<<"Enter a forename for the player :";
            getline(std::cin,tempFirstName);
            cout<<"Enter a surname for the player :";
            getline(cin,tempSecondName);
            cout<<"Enter the field position for the player :";
            getline(cin,tempFieldPosition);
            cout<<"Enter a Mobile Number for the player :";
            getline(cin,tempMobileNumber);
            Squad[PlayerNumber-1].setName(tempFirstName,tempSecondName);
            Squad[PlayerNumber-1].setPosition(tempFieldPosition);
            Squad[PlayerNumber-1].setMobileNumber(tempMobileNumber);
         }

         void WriteToSquadCSV(int MaxSquad){
            fstream fout;
            fout.open("Squad_Details.csv", ios::out);
            fout<<" Line # "<<","<<" First Name "<<","<<" Second Name "<<","<<" Field Position "<<","<<" Mobile Number "<<endl;
            for (int i=0;i<MaxSquad;i++){
                fout<<i+1<<","<<Squad[i].getForename()<<","<<Squad[i].getSurname()<<","<<Squad[i].getPosition()<<","<<Squad[i].getMobileNumber()<<endl;
            }
            fout.close();
            cout<<"\nFile Created successfully!"<<endl;
         }

         void WriteToTeamCSV(int MaxTeam){
            fstream fout;
            fout.open("Team_Details.csv", ios::out);
            fout<<" Line # "<<","<<" First Name "<<","<<" Second Name "<<","<<" Field Position "<<","<<" Mobile Number "<<endl;
            for (int i=0;i<MaxTeam;i++){
                fout<<i+1<<","<<Team[i].getForename()<<","<<Team[i].getSurname()<<","<<Team[i].getPosition()<<","<<Team[i].getMobileNumber()<<endl;
            }
            fout.close();
            cout<<"\nFile Created successfully!"<<endl;
         }

        void PrintSquadInfo(int MaxSquad){
            cout<<"From Private!\n\n";
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

        void PrintTeamInfo(int MaxTeam){
            cout<<"From Private!\n\n";
            for (int i=0;i<MaxTeam;i++){
                cout<<"Player "<<i+1<<" Details!\n\n";
                cout<<"Player Forename : ";
                Team[i].printInfo(Team[i].getForename());
                cout<<"Player Surname : ";
                Team[i].printInfo(Team[i].getSurname());
                cout<<"Field Position : ";
                Team[i].printInfo(Team[i].getPosition());
                cout<<"Player Mobile Number : ";
                Team[i].printInfo(Team[i].getMobileNumber());
                cout<<"\n\n";
            }
        }

        void Read_Line(string FileName) {
            fstream MyFile;
            MyFile.open(FileName,ios::in);
            string Line;
            string LineNumber;
            string Forename;
            string Surname;
            string Position;
            string MobileNumber;

            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            while(std::getline(MyFile,Line)){
                istringstream LineData(Line);
                getline(LineData,LineNumber,',');
                getline(LineData,Forename,',');
                getline(LineData,Surname,',');
                getline(LineData,Position,',');
                getline(LineData,MobileNumber,'\n');

                cout<<setw(10)<<setfill(' ')<<LineNumber<<"|";
                cout<<setw(20)<<setfill(' ')<<Forename<< "|";
                cout<<setw(20)<<setfill(' ')<<Surname<< "|";
                cout<<setw(20)<<setfill(' ')<<Position<<"|";
                cout<<setw(20)<<setfill(' ')<<MobileNumber<<"|"<<endl;
                cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            }
            MyFile.close();

        }

         void StoreDatafromSquadCSVtoMemory(){
            fstream MyFile;
            MyFile.open("Squad_Details.csv",ios::in);
            string Line;
            string LineNumber;
            string Forename;
            string Surname;
            string Position;
            string MobileNumber;
            bool FirstIteration=true;
            int i=0;
            while(std::getline(MyFile,Line)){
                if (FirstIteration!=true){
                    istringstream LineData(Line);
                    getline(LineData,LineNumber,',');
                    getline(LineData,Forename,',');
                    getline(LineData,Surname,',');
                    getline(LineData,Position,',');
                    getline(LineData,MobileNumber,'\n');
                    Squad[i].setName(Forename,Surname);
                    Squad[i].setPosition(Position);
                    Squad[i].setMobileNumber(MobileNumber);
                    i=i+1;
                }
                FirstIteration=false;
            }
            MyFile.close();
         }

         void StoreDatafromTeamCSVtoMemory(){
            fstream MyFile;
            MyFile.open("Team_Details.csv",ios::in);
            string Line;
            string LineNumber;
            string Forename;
            string Surname;
            string Position;
            string MobileNumber;
            bool FirstIteration=true;
            int i=0;
            while(std::getline(MyFile,Line)){
                if (FirstIteration!=true){
                    istringstream LineData(Line);
                    getline(LineData,LineNumber,',');
                    getline(LineData,Forename,',');
                    getline(LineData,Surname,',');
                    getline(LineData,Position,',');
                    getline(LineData,MobileNumber,'\n');
                    Team[i].setName(Forename,Surname);
                    Team[i].setPosition(Position);
                    Team[i].setMobileNumber(MobileNumber);
                    i=i+1;
                }
                FirstIteration=false;
            }
            MyFile.close();
         }
};


#endif // FOOTBALL_CLUB_H_INCLUDED
