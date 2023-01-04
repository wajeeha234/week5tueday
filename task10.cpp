#include<iostream>
#include<cmath>
using namespace std;
main()
{
float a=5;
float b=6;
float c=1;
float power;
float psitivex;
float negetivex;
float squareRoot;
power=pow (b,2);
squareRoot=sqrt(power-(4*a*c));
psitivex=(-b +squareRoot)/(2*a);
negetivex=(-b-squareRoot)/(2*a);
cout<<"positive x is equal to:"<< psitivex<<endl;
cout<<"negetive x is equal to:"<<negetivex<<endl;
}