// WAF to print the nth Fibonacci number.
#include <iostream>
using namespace std;
void printFibonacci(int start, int end){
    int a= 0, b=1 , c;

    while(a<=end){
        if(a>=start){
           cout  << a << " ";
        }
            c=a+b;
            a=b;
            b=c;
    }
    cout<< endl;
    
}
int main(){
    int start=1 , end=45;
    printFibonacci(start, end);
    return 0;
}