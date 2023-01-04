#include<iostream>
using namespace std;
int oddishOrEvenish(int number);
main()
{
int number;
cout<<"enter a number.."<<endl;
cin>>number;
int result;
result=oddishOrEvenish(number);
if(result==true)
 {
  cout<<"number is evenish.."<<endl;
 }
if(result==false)
 {
  cout<<"number is oddish.."<<endl;
 }
}

int oddishOrEvenish(int number)
 {
  int rem1;
  int rem2;
  int rem3;
  int divi1;
  int divi2;
  int divi3;
  int sum;
  rem1 = number % 10;
  divi1= number / 10;
  rem2 = divi1 % 10;
  divi2= divi1 / 10;
  rem3= divi2 % 10;
  divi3 = divi2 / 10;
  sum=rem1+rem3+divi1+divi2+divi3;
  cout<<"sum is.."<<sum<<endl;
  if(sum%2==0)
    {
      return true;
    } 
 if(sum%2!=0)
   {
    return false;
   }
 return 0;
 }



