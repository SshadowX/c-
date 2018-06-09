#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.14
using namespace std;
 int area(int h,int b)
	{
		return ((b*h)/2);
	
	}
	float area (float r)
	{
		return (3.14*r*r);
	}
int main()
{
int b,h;
    float r;
	cout<<"enter value of base,height of triangle and radius of circle:";
	cin>>b>>h>>r;
	cout<<"area of triangle is:"<<area(b,h)<<endl;
	cout<<"area of circle is:"<<area(r);

}
	

