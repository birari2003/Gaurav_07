#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;

    if(n==0)
        cout<<"Number is Zero ";
    else if(n<0)
        cout<<"Number is Negative ";
    else 
        cout<<"Number is Possitive ";
}