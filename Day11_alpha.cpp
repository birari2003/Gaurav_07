#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter any element :";
    cin>>n;

    if(n>=48 && n<=57)
        cout<<"It is a Number ";
    else if((n>=97 && n<=122) || (n>=65 && n<=90))
        cout<<"It is alphabet ";
    else 
        cout<<"It is special symbol";
}