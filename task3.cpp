#include<iostream>
using namespace std;
int maximum(int number1,int number2);
int main()
{
int number1;
int number2;
int result;
cout<<"enter first number.."<<endl;
cin>>number1;
cout<<"enter number2.."<<endl;
cin>>number2;
result=maximum(number1,number2);
cout<<"maximum number is.."<<result<<endl;
cout<<"programe end";
}
int maximum(int number1,int number2)
{
if(number1>number2)
{
 return number1;
}
if(number2>number1)
{
return number2;
}
return 0;
}