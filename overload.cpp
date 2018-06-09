#include<math.h>
#include<iostream>
#define PI 3.14
using namespace std;
float area(float);
int area(int,int);
int main()
{
	int base,height;
	float radius;
	cout<<"enter base,height of triangle and enter radius of circle:";
	cin>>base>>height>>radius;
	cout<<"area of triangle is:"<<area(base,height)<<endl;
	cout<<"area of circle is:"<<area(radius);
}
float area(float radius )
{
	return PI*pow(radius,2);
}
int area(int base,int height)
{
	return ((base*height)/2);
}
