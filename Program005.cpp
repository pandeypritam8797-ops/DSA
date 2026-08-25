// Write a program to make a calculator.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a :";
    cin>> a;
    cout<<"enter b :";
    cin>> b;
    int sum=a+b;
    int diff=a-b;
    int multiply=a*b;
    int division=a/b;
    int modulus=a%b;
    cout<<"sum ="<<sum<<endl;
    cout<<"diff ="<<diff<<endl;
    cout<<"multiply ="<<multiply<<endl;
    cout<<"division ="<<division<<endl;
    cout<<"modulus ="<<modulus<<endl;
    return 0;
} 