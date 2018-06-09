#include<iostream>
using namespace std;
int area(int h,int b)
	{
		return (1/2*(b*h));
	
	}
	int area (int r)
	{
		return 3.14*r*r;
	}
int main()
{
	int b,h,r;
	cout<<"enter value of base,height of triangle and radius of circle";
	cin>>b>>h>>r;
	cout<<"area of triangle is "<<area(b,h);
	cout<<"area of circle is"<<area(r);

}
	

