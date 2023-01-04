#include<iostream>
#include<cmath>
using namespace std;
float height(float distance,float degrees);
int main()
{
float base;
float degrees;
cout<<"enter base value.."<<endl;
cin>>base;
cout<<"enter angle of elevation.."<<endl;
cin>>degrees;
height=height(base,degrees)
cout<<"height is.."<<height<<endl
}
float height(float distance,float degrees)
{
float radian=57.2958;
float radians;
float angle;
float height;
radian =degrees/height;
angle=tan(radian);
height=angle*distance;
return height;
}
