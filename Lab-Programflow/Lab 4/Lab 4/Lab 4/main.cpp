#include <iostream>

using namespace std;

//Class for storing Lab Information

class LabInfo{          // Create a Class Called LabInfo
    public:             // Make Data Public
        string Name;    // String to Capture Name
        string LabID;   // String to Capture the Lab ID

        void SetDate(int valDay,int valMonth,int valYear){                      // +++Function For Setting Private Info+++
            Day=valDay;                                                         // This Function can access Data that cant
            Month=valMonth;                                                     // be accessed outside the LabInfo Class
            Year=valYear;
        }

        void printInfo(LabInfo Info){                                           // +++Function For Printing Lab Infomation+++
            cout<<Info.Name<<endl;                                              // Print Name
            cout<<Info.LabID<<endl;                                             // Print Lab Information
            cout<<"Date: "<<Info.Day<<"/"<<Info.Month<<"/"<<Info.Year<<endl;    // Print Date
        }

    private:            // Make Data Private
        int Day;        // Integer to Capture Day
        int Month;      // Integer to Capture Month
        int Year;       // Integer to Capture Year


};


int main(){

    LabInfo Info;

    Info.Name="Stephen Higgins (G00256450)";
    Info.LabID="Lab Using Classes";
    Info.SetDate(12,2,2021);


    Info.printInfo(Info);

    return 0;
}




