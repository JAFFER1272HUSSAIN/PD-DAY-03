#include<iostream>
using namespace std;
int main()
{
int time;
float i_v,f_v,a;
cout<<"Enter Initial velocity: ";
cin>>i_v;
cout<<"Enter Acceleration: ";
cin>>a;
cout<<"Enter Time: ";
cin>>time;
f_v = (a * time) + i_v;
cout<<"Final Velocity: "<<f_v;
}