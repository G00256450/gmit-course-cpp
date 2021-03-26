#include <iostream>

using namespace std;



class Player{
private:
    string forename;
    string surname;
    string position;
    string mobileNumber;
    string playing;
    int dob;

public:
    Player();
    Player(string forename, string surname);
    Player(string forename, string surname, int mobileNumber, string position,string playing);

    void printPlayerInfo();
    string getForename();
    string getSurname();
    void setName(string name);
    void setName(string forename,string surname);

    void setPosition(string position);
    string getPosition();
    void setMobileNumber(string mobileNumber);
    string getMobileNumber();
    void setPlaying(string playing);
    string getPlaying();


    void setDOB(int dob);
    int getDOB();

};

