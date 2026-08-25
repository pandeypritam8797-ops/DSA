// Write a fucntion program to find the minimum of 2 numbers.

#include <iostream>
using namespace std;
int minOfTwo(int a, int b){    //parameters (copy of argument)
    if(a>b){
        return b;
    }else{
        return a;
    }
    }
int main(){
    cout<< "min = "<< minOfTwo(5,3) << endl;   //arguments (actual values)
    return 0;
}

