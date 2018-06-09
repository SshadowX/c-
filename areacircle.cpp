#include<iostream>
#include<math.h>
#define PI 3.14

using namespace std;

class circle
{
	int radius;
public:
	int getdata(int r)
	{
		float area;
		area=PI*pow(r,2);
		cout<<"area of circle is="<<area;
	}
};

int main()
{
	int r;
	circle c;
	cout<<"enter radius of circle:";
	cin>>r;
	c.getdata(r);
}
