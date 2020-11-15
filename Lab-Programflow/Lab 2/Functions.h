#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
float CircleArea;

void LabInfo(){
    cout << "Stephen Higgins (G00256450)\n";
    cout << "Lab #2\n" << endl;
    return;
}


void ReturnTheLargestValue(){
    int x;
    int y;
    cout<<"Enter an integer for first value X: ";
        cin>> x;
    cout<<"Enter an integer for second value Y: ";
        cin>> y;
    if (x > y){
        cout << "The largest value is " <<x<<"\n\n";
    }
    else{
        cout << "The largest value is " <<y<<"\n\n";
    }
return;
}

void Check(){
    int num;
    cout<<"Input a integer between 1 and 100"<<endl;
    cout<<"Integer cannot be 1 or 100!"<<endl;
    cout<<"Enter your Integer: ";
    cin>>num;
    if ((1<num)&&(num<100)){
        cout<<"The Integer "<<num<<" is between 1 and 100!\n"<<endl;
    }
    else if (num<=1){
        cout <<"The Integer "<<num<<" is less than or equal to 1\n"<<endl;
    }
    else{
        cout <<"The Integer "<<num<<" is greater than or equal to 100\n"<<endl;
    }
return;
}

void AreaOfCircle(){
float PI=3.14159; //Value for pi
float radius; // Radius Variable
cout<<"What is the radius of the circle in mm?\n"; //Prints Question to screen
cin>>radius; // Input value for radius
float answer=PI * radius * radius; //Calculates the answer for area
CircleArea=answer;
cout<<"Area of the circle is: "<<answer<<"mm^2\n\n"; //Prints answer to screen
return ;
}

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

void TemperatureAndHumidity(){
    int Temperature;
    int Humidity;
    cout<<"Input Temperature : ";
    cin>>Temperature;
    cout<<"Input Humidity : ";
    cin>>Humidity;
    cout<<"\n";
    if (Temperature>=95){
        cout<<"ALARM!!! Temperature is in excess of 95 degrees Celcius!\n"<<endl;
    }
    else{
        cout <<"Temperature is within acceptable limits.\n"<<endl;
    }
    if (Humidity>=90){
        cout<<"ALARM!!! Humidity is in excess of 90 Grams per Cubic Metre!\n"<<endl;
    }
    else{
        cout <<"Humidity is within acceptable limits.\n"<<endl;
    }
return;
}


void AngularAreaOfCircle(){
AreaOfCircle();
for(int x=0;x<=120;x++){
    cout<< x <<" Degrees of the circle has a area of: "<<(CircleArea/360)*x<<" mm^2\n";
}
cout<<"\n";
return;
}
void TemperatureConversion(){
    int Program;
    float Answer;
    cout<<"Select a Program from the list below.\n\n";
    cout<<"(1) Fahrenheit to Celcius\n";
    cout<<"(2) Celcius to Fahrenheit\n";
    cout<<"What program would you like to run? : ";
    cin>>Program;
    cout<<"\n\n";
    if (Program==1){
        float Fahrenheit;
        cout<<"Enter temperature in Degrees Fahrenheit : ";
        cin>>Fahrenheit;
        Answer=((Fahrenheit-32)*5/9);
        cout<<"\n"<<Fahrenheit<<" Degrees Fahrenheit is "<<Answer<<" Degrees Celcius\n\n";
    }
    else if (Program==2){
        float Celcius;
        cout<<"Enter temperature in Degrees Celcius : ";
        cin>>Celcius;
        Answer=((Celcius*9/5)+32);
        cout<<"\n"<<Celcius<<" Degrees Celcius is "<<Answer<<" Degrees Fahrenheit\n\n";
    }
    else{
        cout<<"Incorrect program selection!\n\n";
    }
return;
}
void PrintEvenNumbers(){
for(int i=1;i<=1000;i++){
    if (i%2==0){
        cout<< i <<"\n";
    }
}
return;
}

void FindTheOddNumbers(){
int x;
int y;
    cout<<"Enter the first integer : ";
        cin>> x;
    cout<<"Enter the second integer : ";
        cin>> y;
if (x%2!=0){
    cout<<x<<" is a odd number\n";
}
else{
    cout<<x<<" is a even number\n";
}
if (y%2!=0){
    cout<<y<<" is a odd number\n";
}
else{
    cout<<y<<" is a even number\n";
}
cout<<"\n";
}

int FindTheOddNumbers(int a,int b){
for(int i=a;i<=b;i++){
    if (i%2!=0){
        cout<< i <<"\n";
    }
}
return 0;
}


void RandomNumbers(){
for(int x=1;x<=6;x++){
   int Random=rand()%10000+1;
   cout<<Random<<"\n";
}
cout<<"\n";
return;
}


void Exercise14(){
/* Print the numbers 5 through 9: */
int i=5;
while (i < 10){
 cout << i ;
 cout << endl;
 i = i + 1;
}
cout<<"\n";
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20){
 sum = sum + i;
 i = i + 1;
}
cout << "The sum = " << sum<<"\n\n";

/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
int grade;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1){
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0){
 cout << "Average is " << (double) sum / count<<"\n";
}
return;
}
void Exercise15(){
    int i=1;
    while(i<=10){
        cout<<"Finished\n";
        i=i+1;
    }
cout<<"\n";
for(int a=1;a<=10;a++){
       cout<<"Finished\n";
    }
cout<<"\n";
i=1;
do{
    cout<<"Finished\n";
    i=i+1;
}
    while (i<=10);

cout<<"\n";

}

#endif // FUNCTIONS_H_INCLUDED
