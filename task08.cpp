#include<iostream>
using namespace std;
int main()
{
int tkv,tkf;
float vp,fp,vc,fc,total,totalrp;
cout<<"Vegetable price per kilogram: ";
cin>>vp;
cout<<"Fruit price per kilogram: ";
cin>>fp;
cout<<"Total kilograms of vegetables: ";
cin>>tkv;
cout<<"Total kilograms of fruits: ";
cin>>tkf;
vc = vp * tkv;
cout<<"Vegetables cost: "<<vc<<"coins."<<endl;
fc = fp * tkf;
cout<<"Fruits cost: "<<fc<<"coins."<<endl;
total = fc + vc;
totalrp = total / 1.94;
cout<<"Total: "<<totalrp<<"Rp";
}