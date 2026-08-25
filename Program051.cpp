// WAF to print all prime numbers from  1 to N.
#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void printPrimes(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    int n=45;
    printPrimes(n);
    return 0;
}