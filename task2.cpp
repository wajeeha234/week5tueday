#include<iostream>
using namespace std;
float division(int number1, int number2);
main()
{
float number1;
float number2;
float result;
cout<<"enter number1";
cin>>number1;
cout<<"enter number2";
cin>>number2;
result=division(number1,number2);
cout<< "division of two numbers is.. "<<result<<endl;
cout<<"programe is end";
}
float division(int number1, int number2)
{
float divide;
divide=number1/number2;
return divide;
}