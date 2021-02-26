#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

using namespace std;

class FootballClub{
    private:
        string ClubName;                                // Stores ClubName
        string District;                                // Stores District
        string StripColour;                             // Stores StripeColour

    public:
        void printInfo(string Varible){                 // Prints Varible to terminal
            cout<<Varible<<endl;
            }

        void setClubName(string ClubName){              // Sets Value for ClubName using Constructor
            this->ClubName=ClubName;
        }

        void setDistrict(string District){              // Sets Vslue for District using Constructor
            this->District=District;
        }

        void setStripColour(string StripColour){        // Sets Value for StripColour using Constructor
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

};


#endif // FOOTBALL_CLUB_H_INCLUDED
