// caluclate the sum of digits of a number.
#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum =0;

    while(num>0){
        int lasDig = num%10;
        num = num/10;
        digSum+= lasDig;
    }
    return digSum;
}
int main(){
    cout<< "sum ="<< sumOfDigits(2356) << endl;
    return 0;
}