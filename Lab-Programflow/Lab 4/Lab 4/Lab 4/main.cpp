#include <iostream>

using namespace std;

//Class for storing Lab Information

class LabInfo{          // Create a Class Called LabInfo
    public:             // Make Data Public
        string Name;    // String to Capture Name
        string LabID;   // String to Capture the Lab ID
        int Day;        // Integer to Capture Day
        int Month;      // Integer to Capture Month
        int Year;       // Integer to Capture Year

        void printInfo(LabInfo Info){
            cout<<Info.Name<<endl;
            cout<<Info.LabID<<endl;
            cout<<"Date: "<<Info.Day<<"/"<<Info.Month<<"/"<<Info.Year<<endl;
        }
};



//void Labinfo();

int main(){

    LabInfo Info;

    Info.Name="Stephen Higgins (G00256450)";
    Info.LabID="Lab Using Classes";
    Info.Day=12;
    Info.Month=2;
    Info.Year=2021;

    Info.printInfo(Info);

    return 0;
}

//void Labinfo(){
    //cout << "Stephen Higgins (G00256450) \n";
    //cout << "Lab Using Classes" << endl;
//}



