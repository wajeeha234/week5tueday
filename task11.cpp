#include<iostream>
#include<cmath>
using namespace std;
bool symmetrical(int number);
main()
{
int number;
cout<<"enter number.."<<endl;
cin>>number;
int result;
result=symmetrical(number);
if(result==true)
 {
 cout<<"number is symmetricle"<<endl;
 }
if(result==false)
  {
   cout<<"number is non symmetricle"<<endl; 
  }
}
bool symmetrical(int number)
{

int mod1;
int mod2;
int divi1;
int divi2;
mod1=number % 10;
divi1=number / 10;
mod2=mod1 % 10;
divi2=divi1 / 10;
if(mod1==divi2)
 {
  return true;
 }
if(mod1!=2)
 {
  return false; 
 }
 return 0;
}