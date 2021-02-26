// Euro.cpp
#include <iostream>

using namespace std;
//Class to convert
class convert{
    private:
        double rate = 2.28;
    public:
        float calculate(float inputVal){
        return inputVal*rate;
        }
};

int main(){
    float BHD[]={1,2,3,4,5}; //am array

    // declare the class converter
    convert result;

    // using a for loop print all 5 conversions
    for (int i=0;i<5;i++){
        result.calculate(BHD[i]);
        cout << BHD [i] << " BHD =" << result.calculate(BHD[i]) << " EUR"<<endl;
    }
    return 0;
}
