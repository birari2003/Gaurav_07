#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the height of rectangle in cm :";
    cin>>a;
    cout<<"Enter the width of rectangle in cm :";
    cin>>b;

    cout<<"The area of rectangle is :"<<a*b<<" sq cm"<<endl;
    cout<<"The perimeter of rectangle is :"<<(2*a)+(2*b)<<" cm"<<endl;
    return 0;
}