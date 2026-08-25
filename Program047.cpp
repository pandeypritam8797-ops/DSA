// Example prblm of Pass by value.
#include <iostream>
using namespace std;

int sum(int a, int b) {   // isme changes hoga toh 
    a = a+10;   //15
    b = b+10;  //14
    return a+b;  //29
}

int main(){              // isme reflect nahi hoga
    int a = 5, b = 4;
    cout << sum(a, b)<< endl;

    cout<< a << endl;
    cout<< b << endl;
    return 0;

}