#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "football_club.h"

using namespace std;

class Player{
    private:
        string Forename = " ";                                    // Stores Forename
        string Surname = " ";                                     // Stores Surname
        string Position = " ";                                    // Stores Position
        string MobileNumber = " ";                                // Stores Mobile Number

    public:

        void printInfo(string Varible){                     // Prints String Varible to terminal
            cout<<Varible<<endl;
            }

        void setName(string Forename,string Surname){       // Sets Value for Forname using Constructor
            this->Forename=Forename;
            this->Surname=Surname;
        }

        void setPosition(string Position){                  // Sets Value for Position using Constructor
            this->Position=Position;
        }

        void setMobileNumber(string MobileNumber){   // Sets Value for Mobile Number using Constructor
            this->MobileNumber=MobileNumber;
        }

        string getForename(){                               // Gets Value for Position from Private
            return Forename;
            }

        string getSurname(){                               // Gets Value for Position from Private
            return Surname;
            }

        string getPosition(){                               // Gets Value for Position from Private
            return Position;
            }

        string getMobileNumber(){                    // Gets Value for Mobile Number from Private
            return MobileNumber;
            }

};

#endif // PLAYER_H_INCLUDED
