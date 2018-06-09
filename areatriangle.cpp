#include<iostream>
using namespace std;

class triangle{
	int base;
	int height;
public:
	int getdata(int b,int h)
	{
	//	int base,height;
		float area;
		area=(base*height)/2;
		cout<<"area of triangle is="<<area;
	}
		
};
int main()
{
	int base,height;
	triangle t;
	cout<<"enter base and height of triangle:";
	cin>>base>>height;
	t.getdata(base,height);
}
