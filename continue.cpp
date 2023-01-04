#include<iostream>
#include<cmath>
using namespace std;
float positive(float a, float b, float c);
float negetive(float a,float b,float c);
int main()
{
float a;
float b;
float c;
float valueOfX1;
float valueOfX2;
cout<<"enter value of A...";
cin>>a;
cout<<"enter value of B...";
cin>>b;
cout<<"enter value of C...";
cin>>c;
valueOfX1 = positive(a, b , c);
cout<<"value of x1 is ...."<<valueOfX1;
valueOfX2 = negetive(a , b , c);
cout<<"value of x2 is ...."<<valueOfX2;
}
float positive(float a, float b, float c)
{
 float power;
 float positivex;
 float squareRoot;
 power= pow (b,2);
 squareRoot=sqrt(power-(4*a*c));
 positivex=(-b + squareRoot)/(2*a);
 return positivex;
} 
float negetive(float a,float b,float c)
{
 float power;
 float negativex;
 float squareRoot;
 power= pow(b,2);
 squareRoot=sqrt(power-(4*a*c));
 negativex=(-b - squareRoot)/(2*a);
 return negativex;
}

