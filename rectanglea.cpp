#include<iostream>
using namespace std;
class time{
	int hours,minutes,second;
	public:
	void settime(int h,int m,int s)
	{
		hours=h;
		minute=m;
		second=s;
	}
	void gettime()
	{
		cout<<"hours,minute,second:";
		cin>>hours>>minute>>second;
	}
	void addtime(time t1,time t2,time t3)
	{
		t3.hours=t1.hours+t2.hours;
		t3.minute=t1.minute+t2.minute;
		t3.second=t1.second+t2.second;
	}
	void showtime()
	{
		cout<<hours<<":"<<minute<<":"<<second<<endl;
	}
};
int main()
{
	time t1,t2,t3;
	t.gettime();
	t1.showtime();
	t2.settime(2,33,44);
	t2.showtime();
	t3.addtime(t1,t2,t3);
	t3.showtime();
}
