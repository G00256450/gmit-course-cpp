#include <iostream>
using namespace std;
#include "Functions.h"

int program;

int main(){
string repeat="Y";

while ((repeat=="Y")or(repeat=="y")){
    repeat="N";
cout<<"What program would you like to run?\n";
cout<<"\n";
cout<<"(1)  Information about the Program\n";
cout<<"(2)  Check the largest of Two Inegers\n";
cout<<"(3)  Check an interger is between 1 and 100\n";
cout<<"(4)  Calculate the area of a circle\n";
cout<<"(5)  Calculate the area of a Rectangle\n";
cout<<"(6)  Check Temperature and Humidity is within Limits\n";
cout<<"(7)  Section area of a Circle from 0 to 120 degrees\n";
cout<<"(8)  Temperature Conversion\n";
cout<<"(9)  Print all even numbers from 1-1000\n";
cout<<"(10) Find the odd numbers\n";
cout<<"(11) OverLoaded Function\n";
cout<<"(12) Generate 6 random Numbers\n";
cout<<"(13) Lab 2 Exercise 14\n";
cout<<"(14) Lab 2 Exercise 15\n";

cout<<"\n";
cout<<"Enter the program number you wish to run (1-14): ";
cin>>program;
cout<<"\n";

if ((1<=program)&&(program<=14)){
    switch (program){
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
        AngularAreaOfCircle();
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
        case 11:
        int a,b;
        cout<<"Enter start interger (A) : ";
        cin>> a;
        cout<<"Enter finish integer (B) : ";
        cin>> b;
        cout<<"\n";
        FindTheOddNumbers(a,b);
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
}

else{
cout<<"Input is not included in scope!\n\nPlease input a program number listed.\n\n";
}

cout<<"\n\n";

cout<<"Would you like to run a different program?\n";
cout<<"Enter(Y/N): ";
cin>>repeat;
cout<<"\n\n";

while ((repeat!="y")&&(repeat!="n")&&(repeat!="Y")&&(repeat!="N")){
cout<<"Invalid Entry!\n\n";
cout<<"Would you like to run a different program?\n\n";
cout<<"Enter(Y/N):";
cin>>repeat;
cout<<"\n\n";
}

}
cout<<"Goodbye!\n\n";
return 0;
}

