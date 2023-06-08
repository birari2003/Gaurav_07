#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any ammount :";
    cin>>n;

    int one,two,five,ten,twenty,fifty,hundred,pachshe;
    pachshe=n/500;
    hundred=(n%500)/100;
    fifty=((n%500)%100)/50;
    twenty=(((n%500)%100)%50)/20;
    ten=((((n%500)%100)%50)%20)/10;
    five=(((((n%500)%100)%50)%20)%10)/5;
    two=((((((n%500)%100)%50)%20)%10)%5)/2;
    one=(((((((n%500)%100)%50)%20)%10)%5)%2)/1;
    cout<<"500 ="<<pachshe<<"\n100 ="<<hundred<<"\n50 ="<<fifty<<"\n20 ="<<twenty<<"\n10 ="<<ten<<
    "\n5 ="<<five<<"\n2 ="<<two<<"\n1 ="<<one;
}