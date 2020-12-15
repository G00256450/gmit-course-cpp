#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
using namespace std;

const int n=6;
int Arr[n];
int ScalarVar;

//Question 1
void LabInfo(){
    cout<<"Stephen Higgins (G00256450)"<<endl;
    cout<<"Lab #3"<<endl;
    cout<<endl;
}
//Question 2
void Array1(){
    cout<<"This array has 6 elements!"<<endl;
    cout<<endl;
        for (int i=0;i<n;i++){
            cout<<"Enter element "<<i+1<< " of the array : ";
            cin>>Arr[i];
            if((Arr[i]>100)or(Arr[i]<0)){
                cout<<"The value you have entered : "<<Arr[i]<< " is not >0 and <100!"<<endl;
                cout<<"Please Re-Enter the number"<<endl;
                cout<<endl;
                --i;
            }
        }
    cout<<endl;
}

//Question 3 & 6
void PrintArray(){
    cout<<"The array you entered is : { ";
    for (int i=0;i<n;i++){
        if (i==5){
        cout<<Arr[i]<<" }";
        }
        else{
        cout<<Arr[i]<<" , ";
        }
    }
cout<<endl;

}

//Question 3 & 6 Continued
void PrintArrayAddress(){
    cout<<"The addresses for array you entered shown above are : { ";
    for (int i=0;i<n;i++){
        if (i==5){
        cout<<&Arr[i]<<" }";
        }
        else{
        cout<<&Arr[i]<<" , ";
        }
    }
cout<<endl;

}

//Question 4
void Scalar(){
cout<<"Enter a scalar number : ";
cin>>ScalarVar;
cout<<endl;
}

//Question 5
void ArrayRef(int* ArrRef,int n,int* ScalarVarRef){
    for (int i=0;i<n;i++){
        Arr[i]=(Arr[i])*(ScalarVar);
    }
cout<<endl;
}


//Question 7
void Array2D(){
int columns,rows;
cout<<"Input the number of rows : ";
cin>>rows;
cout<<endl<<"Input the number of columns : ";
cin>>columns;
cout<<endl;
int Array[rows][columns];
    for (int i=0;i<rows;i++){
            cout<<"Enter "<<columns<<" values for Array["<<i<<"]!"<<endl;
            cout<<"Array["<<i<<"]={";
        for(int j=0;j<columns;j++){
            cin>>Array[i][j];
            if (j<(columns-1)){
                cout<<", ";
            }
            else{
                cout<<"}"<<endl;
            }
        }

    }
    for (int i=0;i<rows;i++){
            cout<<"Array["<<i<<"]={";
        for(int j=0;j<columns;j++){
            cout<<Array[i][j];
            if (j<(columns-1)){
                cout<<", ";
            }
            else{
                cout<<"}"<<endl;
            }
            }
        }
    }

void ChristmasTree(){
//                                ROW0                                          ROW1                                            ROW2                                        ROW3                                        ROW4                                            ROW5                                           ROW6                                          ROW7                                          ROW8                                         ROW9
string Tree[15][19]={   {" "," "," "," "," "," "," "," "," ","O"," "," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," "," "," ","X"," "," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," "," ","X","O","X"," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," ","X","X","X","X","X"," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," ","X","O","X","X","X","O","X"," "," "," "," "," "," "},
                        {" "," "," "," "," ","X"," ","H","A","P","P","Y"," ","X"," "," "," "," "," "},
                        {" "," "," "," ","X","X","X","X","X","X","X","X","X","X","X"," "," "," "," "},
                        {" "," "," ","X"," ","C","H","R","I","S","T","M","A","S"," ","X"," "," "," "},
                        {" "," ","X","X","X","X","X","O","X","O","X","X","X","X","O","X","X"," "," "},
                        {" ","X","O","X","X","X","X","X","X","X","X","O","X","X","X","X","X","X"," "},
                        {"X","X","X","O","X","X","O","X","X","X","X","X","X","X","X","X","X","X","X"},
                        {" "," "," "," "," "," "," "," ","|","X","|"," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," "," ","|","X","|"," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," "," ","|","X","|"," "," "," "," "," "," "," "," "},
                        {" "," "," "," "," "," "," "," ","|","X","|"," "," "," "," "," "," "," "," "},};
for (int i=0;i<14;i++){
        cout<<endl;
        for(int j=0;j<19;j++){
            cout<<Tree[i][j];
            }
}
}



#endif // FUNCTIONS_H_INCLUDED
