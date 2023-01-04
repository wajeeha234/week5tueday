#include<iostream>
using namespace std;
int sum(int number1, int number2);
main()
{
int number1;
int number2;
int result;
cout<<"enter number1..";
cin>>number1;
cout<<"enter number2..";
cin>>number2;
result=sum(number1,number2);
cout<<"sum is :"<<result<<endl;
cout<<"program end";
}
int sum(int number1, int number2)
{
int add;
add=number1+number2;
return add;
}
