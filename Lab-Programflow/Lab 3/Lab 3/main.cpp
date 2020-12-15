#include <iostream>
#include "functions.h"
using namespace std;




int main()
{
    LabInfo();
    Array1();
    PrintArray();
    PrintArrayAddress();
    Scalar();
    ArrayRef(&Arr[0],6,&ScalarVar);
    PrintArray();
    PrintArrayAddress();
    Array2D();
    ChristmasTree();
return 0;
}

