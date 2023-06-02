#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    cout<<"Enter the distance of point A ";
    cin>>x1>>y1;
    cout<<"Enter the Distance of Point B ";
    cin>>x2>>y2;

    float ans;
    ans=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"Distance between two points :"<<ans;
}