// Write a peogram to return value from function and print the value.

#include <iostream>
using namespace std;
int printHello(){
    cout<< "hello\n";
    return 3;
}

int main(){
    int val = printHello();
    cout<< "val = "<< val<< endl;  // or we just cout the function wihtout storing it in variable. 
    return 0;
}