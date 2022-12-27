#include<iostream>
using namespace std;
int main()
{
string movie;
int adult,child,numberadult,numberchild;
float percentage,total,afterdonation,a;
cout<<"Enter Movie Name: ";
cin>>movie;
cout<<"Enter Adult Ticket Price: ";
cin>>adult;
cout<<"Enter Child Ticket Price: ";
cin>>child;
cout<<"Enter Number of Adult Ticket Sold: ";
cin>>numberadult;
cout<<"Enter Number of Child Ticket Sold: ";
cin>>numberchild;
cout<<"Enter Percentage to Donated: ";
cin>>percentage;
cout<<"------------------------------------"<<endl;
total = (adult * numberadult) + (child * numberchild );
cout<<"Total Amount Generated: "<<total<<endl;
a = (percentage / 100) * total;
afterdonation = total - a;
cout<<"Amount After Donation: "<<afterdonation;
}