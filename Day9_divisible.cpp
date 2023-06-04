#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number :";
    cin>>n;

    if(n%5==0 && n%11==0)
        cout<<"Your number is divisible by 5 and 11...";
    else 
        cout<<"Not divisible...";
}