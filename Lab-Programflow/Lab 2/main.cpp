#include <iostream>
#include "Functions.h"

using namespace std;


int main(){

    while ((repeat=="Y")or(repeat=="y")){ //Starts a loop for re-entering the menu without exiting
    cout<<"What program would you like to run?\n";//Prompts Question
    cout<<"\n";//New Line
    cout<<"(1)  Q1  Information about the Program\n";//Program Options 1-14
    cout<<"(2)  Q2  Check the largest of Two Inegers\n";
    cout<<"(3)  Q3  Check an interger is between 1 and 100\n";
    cout<<"(4)  Q5  Calculate the area of a circle\n";
    cout<<"(5)  Q6  Calculate the area of a Rectangle\n";
    cout<<"(6)  Q7  Check Temperature and Humidity are set within Limits\n";
    cout<<"(7)  Q8  Area of a Circle from 0 to 120 meters\n";
    cout<<"(8)  Q9  Temperature Conversion\n";
    cout<<"(9)  Q10 Print all even numbers from 1-1000\n";
    cout<<"(10) Q11 Find the odd numbers\n";
    cout<<"(11) Q12 OverLoaded Function\n";
    cout<<"(12) Q13 Generate 6 random Numbers\n";
    cout<<"(13) Q14 Lab 2 Exercise 14\n";
    cout<<"(14) Q15 Lab 2 Exercise 15\n";
    cout<<"\n";
    cout<<"Enter the program number you wish to run (1-14): "; //Prompts user to input selected program number
    cin>>program;//User Inputs Number
    cout<<"\n";

        if ((1<=program)&&(program<=14)){// If program is within set limits the program will be selected
            switch (program){            // else the program will enter alarm state.
                case 1:
                    LabInfo();
                break;
                case 2:
                    ReturnTheLargestValue();
                break;
                case 3:
                    Check();
                break;
                case 4:
                    AreaOfCircle();
                break;
                case 5:
                    AreaOfRectangle();
                break;
                case 6:
                    TemperatureAndHumidity();
                break;
                case 7:
                    AreaOfCircle();
                break;
                case 8:
                    TemperatureConversion();
                break;
                case 9:
                    PrintEvenNumbers();
                break;
                case 10:
                    FindTheOddNumbers();
                break;
                case 12:
                    RandomNumbers();
                break;
                case 13:
                    Exercise14();
                break;
                case 14:
                    Exercise15();
                break;
                    }
                if (program==11){                              //Program 11 would not work under switch command
                    int sizeofArray;                           //Was required to insert underneath as a if.
                    cout<<"Enter the size of the array : ";
                    cin>> sizeofArray;//User Inserts the numbr of elements
                    int theArray[sizeofArray];
                        for (int i=0;i<sizeofArray;i++){//Iterates through elements of array and asks user to input value for each.
                        cout<<"Enter element "<< i+1 <<" of the array : ";
                        cin>> theArray[i];//User input for elements
                        }
                    FindTheOddNumbers(theArray,sizeofArray);
                }
            }

        else{
        cout<<"Input is not included in scope!\n\nPlease input a program number listed.\n\n";// If a value outside the set values is input by
        }                                                                                    // the user the program prompts a message to the user.

    Alarm();

        while ((repeat!="y")&&(repeat!="n")&&(repeat!="Y")&&(repeat!="N")){//Unless the required Upper or Lower case "N" or "Y" is
            cout<<"Invalid Entry!\n";                                      // input by the user the program will loop here.
            Alarm();
        }

    }
cout<<"Goodbye!\n\n";// Prints Goodbye when terminating program.
return 0;
}





