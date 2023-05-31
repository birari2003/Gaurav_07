#include<iostream>
using namespace std;
int main(){
    char name[20];
    int roll;
    int m1,m2,m3,m4,m5;

    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your roll no. :";
    cin>>roll;

    cout<<"Enter your subject marks :"<<endl;
    cout<<"M1 :";
    cin>>m1;
    cout<<"DAA :";
    cin>>m2;
    cout<<"WT :";
    cin>>m3;
    cout<<"DM :";
    cin>>m4;
    cout<<"DSA :";
    cin>>m5;

    int total;
    total=m1+m2+m3+m4+m5;
    int avg = total/5;
    float per = (total*100)/500;
    cout<<"your total marks is :"<<total<<"/500"<<endl;
    cout<<"The avarage of your marks is :"<<avg<<endl;
    cout<<"Percentage is :"<<per<<"%";
}