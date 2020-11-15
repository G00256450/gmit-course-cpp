#include <iostream>

using namespace std;

int x;
int y;

void LabInfo() {
    cout << "Stephen Higgins (G00256450)\n";
    cout << "Lab #2" << endl;
}
void Check(){
    if ((1<x<100)||(1<y<100)){
        cout<<"Re-Enter Values!\n";
        cout<<"Enter Value between 1 and 100 for X: ";
        cin>> x;
        cout<<"\n";
        cout<<"Enter Value between 1 and 100 for Y: ";
        cin>> y;
        cout<<"\n";
        Check:
        return;
    }
}

int main()
{
   LabInfo:

cout<<"Enter Value between 1 and 100 for X: ";
cin>> x;
cout<<"\n";
cout<<"Enter Value between 1 and 100 for Y: ";
cin>> y;
cout<<"\n";
check:
    if(x > y){
        cout << "The largest value is " <<x;
    }
    else{
        cout << "The largest value is " <<y;
    }
}
