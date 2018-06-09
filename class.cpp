#include<iostream>
using namespace std;
class rectangle{
	int length;
	int bredth;
	public:
		void setdata(int l,int b)
		{
			length=l;
			bredth=b;
		}
		void showdata()
{
	cout<<"length="<<length<<"bredth="<<bredth;
}
int findarea()
{
	return length*bredth;
}
int findperimeter()
{
	return 2*(length+bredth);
}
};

int main()
{
	rectangle r;
	r.setdata(10,20);
	r.showdata();
	cout<<"area="<<findarea();
	cout<<"perimeter="<<findperimeter();
};
