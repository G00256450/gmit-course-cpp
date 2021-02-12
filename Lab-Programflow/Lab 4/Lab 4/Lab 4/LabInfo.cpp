#include <iostream>
#include "LabInfo.h"                            // Include Header File LabInfo

using namespace std;

int main(){

    LabInfo Info;                               // Declare Class as Info

    Info.Name="Stephen Higgins (G00256450)";    // Declare Name in Class LabInfo
    Info.LabID="Lab Using Classes";             // Declare LabID in Class LabInfo
    Info.SetDate(12,2,2021);                    // Declare Date in Class LabInfo using Overloaded Function in Public


    Info.printInfo(Info);                       // Print to terminal in format:
                                                // Name
    return 0;                                   // Lab Info
}                                               // Date dd/mm/yy

