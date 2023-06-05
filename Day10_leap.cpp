#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter year :";
    cin>>n;

    if(n%400==0 || n%4==0)
        cout<<"Year is leap year ...";
    else 
        cout<<"Year is not leap year ...";
}