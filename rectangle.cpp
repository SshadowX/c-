#include<iostream>
using namespace std;
class rectangle{
	int length;
	int breadth;
public:
	void setdata (int l,int b)
	{
		length=l;
		breadth=b;
		
	}
	void showdata()
	{
		cout<<"length="<<length<<endl;
		cout<<"breadth="<<breadth<<endl;
	}
	int area()
	{
		return length*breadth;
	}
	void getdata()
	{
		cout<<"enter length :";
		cin>>length;
		cout<<"enter bredth:";
		cin>>breadth;
		setdata(length,breadth);
	}
};
int main()
{
	rectangle r;
	r.getdata();
	r.showdata();
	cout<<"area="<<r.area();
}
