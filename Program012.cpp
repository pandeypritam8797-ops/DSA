// Write a program to find the sum of numbers from 1 to N.
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int sum=0;
    int i=1;

    while(i<=n){
        sum += i;
        i++;
    }
    cout<<"sum = "<< sum<< endl;
return 0;
}
