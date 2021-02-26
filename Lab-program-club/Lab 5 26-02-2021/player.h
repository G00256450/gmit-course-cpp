#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iomanip>

using namespace std;

class Player{
    private:
        string Forename;                                    // Stores Forename
        string Surname;                                     // Stores Surname
        string Position;                                    // Stores Position
        long long int MobileNumber;                         // Stores Mobile Number

    public:

        void printInfo(string Varible){                     // Prints String Varible to terminal
            cout<<Varible<<endl;
            }

        void printInfo(long long int Varible){              // Prints Int Varible to terminal
            cout<<setfill('0')<<setw (11)<<Varible<<endl;
            }

        void setName(string Forename,string Surname){       // Sets Value for Forname using Constructor
            this->Forename=Forename;
            this->Surname=Surname;
        }

        void setPosition(string Position){                  // Sets Value for Position using Constructor
            this->Position=Position;
        }

        void setMobileNumber(long long int MobileNumber){   // Sets Value for Mobile Number using Constructor
            this->MobileNumber=MobileNumber;
        }

        string getName(){                                   // Gets Value for Forename from Private
            return Forename + " " + Surname;
        }

        string getPosition(){                               // Gets Value for Position from Private
            return Position;
            }

        long long int getMobileNumber(){                    // Gets Value for Mobile Number from Private
            return MobileNumber;
            }

};


#endif // PLAYER_H_INCLUDED
