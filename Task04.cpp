#include<iostream>
using namespace std;
int main()
{
int s1,s2,s3,s4,s5;
float sum;
float percentage;
cout<<"Enter subject 01 marks: ";
cin>>s1;
cout<<"Enter subject 02 marks: ";
cin>>s2;
cout<<"Enter subject 03 marks: ";
cin>>s3;
cout<<"Enter subject 04 marks: ";
cin>>s4;
cout<<"Enter subject 05 marks: ";
cin>>s5;
sum = s1 + s2 + s3 + s4 + s5;
percentage = (sum / 500) * 100;
cout<<"Percentage: "<<percentage<<"%";
}