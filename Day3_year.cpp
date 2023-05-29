#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    int y,w,d;
    y=n/365;
    w=(n%365)/7;
    d=(n%365)%7;

    cout<<"year :"<<y<<endl;
    cout<<"week is"<<w<<endl;
    cout<<"Days is "<<d;
}