#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
using namespace std;

int program;
string repeat="Y";//Sets initial condition for running program

void Alarm(){ //Alarm for incorect inputs.
    //cout<<"\n";
    cout<<"Would you like to run a different program?\n";
    cout<<"Enter(Y/N): ";
    cin>>repeat;
    cout<<"\n";
}

//Question 1
void LabInfo(){ //Displays Information about the Lab.
    cout << "Stephen Higgins (G00256450)\n";
    cout << "Lab #2\n" << endl;
    return;
}

//Question 2
void ReturnTheLargestValue(){//Returns the greater of two values
int x;//Integer X
int y;//Integer Y
cout<<"Enter an integer for first value X: ";//Prompts Question
cin>> x;//User inputs a value X
cout<<"Enter an integer for second value Y: ";//Prompts Question
cin>> y;//User inputs a value Y
    if (x > y){
        cout << "The largest value is " <<x<<"\n\n";//If X>Y then this condition is true and prints message
    }
    else{
        cout << "The largest value is " <<y<<"\n\n";//Else Y>X AND Prints this message.
    }
return;
}

//Question 3
void Check(){//Checks numbers are between 1 and 100 but not equal to 1 or 100
int num;//Integer
cout<<"Input a integer between 1 and 100"<<endl;//Propts Message
cout<<"Integer cannot be 1 or 100!"<<endl;//Propts Message
cout<<"Enter your Integer: ";//Propts Message
cin>>num;//User inputs Integer
    if ((1<num)&&(num<100)){//Check Number is between 1 & 100
        cout<<"The Integer "<<num<<" is between 1 and 100!\n"<<endl;//If true prints message
    }
    else if (num<=1){//If not ture it check if the values is less than or equal to 1
        cout <<"The Integer "<<num<<" is less than or equal to 1\n"<<endl;//If this condition is true prints message
    }
    else{//if neither of above is true then integer is greater than or equal to 100
        cout <<"The Integer "<<num<<" is greater than or equal to 100\n"<<endl;//If this condition is true prints message
    }
return;
}

//Question 5 & 8
void AreaOfCircle(){
float answer;//Float Answer
float radius;//Float Radius
float PI=3.14159; //Value for pi
    if(program==4){//If program 4 is called called executes here
        cout<<"What is the radius of the circle in m?\n"; //Prints Question to screen
        cin>>radius; // Input value for radius
    }
answer=PI * radius * radius; //Calculates the answer for area
cout<<"When the radius of the circle is "<<radius<<"m, the area of the circle is "<<answer<<"m^2\n\n";//Prints answer to screen
    if (program==7){//if program 7 is called executes here
        int a=0;//Set start point
        int b=120;//Set finish point
        for(int initial=a;initial<=b;initial++){//Uses a For loop to iterate from start to finish.
            answer=PI * initial * initial;//Calculates the answer for area
            cout<< "When the radius of the circle is "<<initial<<"m, the area of the circle is "<<answer<<"m^2\n\n";//Prints answer to screen
        }
    }
return;
}

//Question 6
void AreaOfRectangle(){
float length;//Value for length
float width;//Value for width
cout<<"Input the lenght of the rectangle in mm : ";//Prints Question to screen
cin>> length;// Input value for lenght
cout<<"Input the width of the rectangle in mm : ";//Prints Question to screen
cin>> width;// Input value for width
float Area=length*width;//Calculates the answer for area
cout<<"The area of the rectangle is : "<<Area<< "mm^2\n\n";//Prints answer to screen
return ;
}

//Question 7
void TemperatureAndHumidity(){
int Temperature;//Integer Temperature
int Humidity;//Integer Humidity
cout<<"Input Temperature : ";//Prints Question to screen
cin>>Temperature;// Input value for Temperature
cout<<"Input Humidity : ";//Prints Question to screen
cin>>Humidity;// Input value for Humidity
cout<<"\n";
    if (Temperature>=95){ //If condition is true prints Message
        cout<<"ALARM!!! Temperature is in excess of 95 degrees Celcius!\n"<<endl;
    }
    else{//Else if condition is false prints Message
        cout <<"Temperature is within acceptable limits.\n"<<endl;
    }
    if (Humidity>=90){//If condition is true prints Message
        cout<<"ALARM!!! Humidity is in excess of 90 Grams per Cubic Metre!\n"<<endl;
    }
    else{//Else if condition is false prints Message
        cout <<"Humidity is within acceptable limits.\n"<<endl;
    }
return;
}

//Question 9
void TemperatureConversion(){
int Program;//Varible for conversion type
float Answer;//Float Answer
cout<<"Select a Program from the list below.\n\n";//Prints question and menu ot screen.
cout<<"(1) Fahrenheit to Celcius\n";
cout<<"(2) Celcius to Fahrenheit\n";
cout<<"What program would you like to run? : ";
cin>>Program;//User input for conversion type.
cout<<"\n\n";
    if (Program==1){ //If user inputs 1, executes this program
        float Fahrenheit;//Float Fahrenheit
        cout<<"Enter temperature in Degrees Fahrenheit : ";//Prints question to screen
        cin>>Fahrenheit;//User input for temperature
        Answer=((Fahrenheit-32)*5/9);//Equation for conversion
        cout<<"\n"<<Fahrenheit<<" Degrees Fahrenheit is "<<Answer<<" Degrees Celcius\n\n";//Prints Result too screen
    }
    else if (Program==2){
        float Celcius;//Float Celcius
        cout<<"Enter temperature in Degrees Celcius : ";//Prints question to screen
        cin>>Celcius;//User input for temperature
        Answer=((Celcius*9/5)+32);//Equation for conversion
        cout<<"\n"<<Celcius<<" Degrees Celcius is "<<Answer<<" Degrees Fahrenheit\n\n";//Prints Result too screen
    }
    else{
        cout<<"Incorrect program selection!\n\n";//If program input in not 1 or 2 prints message to screen.
    }
return;
}

//Question 10
void PrintEvenNumbers(){//Prints even numbers to screen between 0 and 100
    for(int i=1;i<=1000;i++){//For Loop controls iterations
        if (i%2==0){//Calculation for even numbers
            cout<< i <<"\n";//Prints answers to screen
        }
    }
return;
}

//Question 11
void FindTheOddNumbers(){//Prints Odd numbers from 2 inputs if present
int x;//Interger X
int y;//Interger Y
cout<<"Enter the first integer : ";//Prints Question to screen
cin>> x;//User Input for X
cout<<"Enter the second integer : ";//Prints Question to screen
cin>> y;//User Input for y
        if (x%2!=0){//Calculation to detemine if X input is a Odd number
            cout<<"The number "<< x <<" is a odd number!\n";//Prints to screen if true
        }
        if (y%2!=0){//Calculation to detemine if Y input is a Odd number
            cout<<"The number "<< y <<" is a odd number!\n";//Prints to screen if true
        }
cout<<"\n";
return;
}

//Question 12
void FindTheOddNumbers(int theArray [],int sizeofArray){//Iterates through an Array of values and prints the odd values
    for(int i=0;i<sizeofArray;i++){//For loop to iterate through the array
        if (theArray[i]%2!=0){//if true prints values to screen
            cout<<"The number "<< theArray[i] <<" is a odd number!\n";//Prints to screen
        }
    }
cout<<"\n";
return;
}

//Question 13
void RandomNumbers(){//Generates 6 random numbers between 1 and 10000
for(int x=1;x<=6;x++){//For loop to generate 6 numbers
   int Random=rand()%10000+1;//Function for generating random numbers
   cout<<Random<<"\n";//Prints random number to screen
}
cout<<"\n";
return;
}

//Question 14
void Exercise14(){
/* Print the numbers 5 through 9: */
int i=5;//interger to set start point
    while (i < 10){//while loop to iterate from 5 to 9
     cout << i ;//Prints interger i each iteration
     cout << endl;
     i = i + 1;//Adds 1 to i each iteration
    }
cout<<"\n";
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;//interger to set start point
int sum = 0;//interger to set result
    while (i <= 20){//while loop to iterate from 5 to 9
     sum = sum + i;//Accumelator for sum
     i = i + 1;//Adds 1 to i each iteration
    }
cout << "The sum = " << sum<<"\n\n";//Prints resulting sum to screen

/* Average a list of grades terminated by -1 */
sum = 0;//interger to set result
int count = 0;//interger to set count
int grade;//integer for grade
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
    while (grade != -1){//while loop to iterates until user inserts -1
     sum = sum + grade;//Accumelator for sum
     count = count + 1;//Counts the number of grades inputted
     /* Get next grade */
     cout << "Enter grade (-1 to end): ";// prompt user for grade
     cin >> grade;//User inputs grade or -1
    }
    if (count > 0){//If the count is greater than 0, calculats the average
     cout << "Average is " << (double) sum / count<<"\n";//Prints Average to screen
    }
return;
}

//Question 15
void Exercise15(){
int i=1;
    while(i<=10){//While Loop for 10 iterations prints "Finished"
        cout<<"Finished\n";
        i=i+1;
    }
cout<<"\n";
    for(int a=1;a<=10;a++){//For Loop for 10 iterations prints "Finished"
       cout<<"Finished\n";
    }
cout<<"\n";
i=1;
    do{
        cout<<"Finished\n";//DO Loop for 10 iterations prints "Finished"
        i=i+1;
    }
    while (i<=10);

cout<<"\n";

}


#endif // FUNCTIONS_H_INCLUDED
