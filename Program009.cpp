#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character:";
    cin>>ch;
    if(ch>='a' && ch<= 'z'){
        cout<<"lower case\n";
    }else if(ch>= 'A' && ch<= 'Z'){
        cout<<"UPPER CASE\n";
    }else{
        cout<<"not valid\n";
    }
return 0;
}