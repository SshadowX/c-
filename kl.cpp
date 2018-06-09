#include<iostream>
using namespace std;
class time{
	int hour,minute,second;
public:
    int settime(int h,int m,int s)
	{
		cout<<"enter time in hour minute and second:";
		cin>>h>>m>>s;
	}		
	int showtime(int h,int m, int s)
	{
		cout<<h<<m<<s;
	}
};
