#include<iostream>
using namespace std;
int main()
{
int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,total,sum,mul,sub;
cout<<"Enter 1st Number: ";
cin>>v1;
cout<<"Enter 2nd Number: ";
cin>>v2;
cout<<"Enter 3rd Number: ";
cin>>v3;
cout<<"Enter 4th Number: ";
cin>>v4;
cout<<"Enter 5th Number: ";
cin>>v5;
sum = v1+v2+v3+v4+v5;
cout<<"Enter 6th Number: ";
cin>>v6;
cout<<"Enter 7th Number: ";
cin>>v7;
cout<<"Enter 8th Number: ";
cin>>v8;
cout<<"Enter 9th Number: ";
cin>>v9;
cout<<"Enter 10th Number: ";
cin>>v10;
mul = v6*v7*v8*v9*v10;
cout<<"Enter 11th Number: ";
cin>>v11;
cout<<"Enter 12th Number: ";
cin>>v12;
cout<<"Enter 13th Number: ";
cin>>v13;
cout<<"Enter 14th Number: ";
cin>>v14;
cout<<"Enter 15th Number: ";
cin>>v15;
sub = v11-v12-v13-v14-v15;
total = (sum+mul)-sub;
cout<<"Total: "<<total;



}
