# include<iostream>
using namespace std;
class time
{
	int m,s,h;
	int mm,ss,hh;
	public:
		void gettime1(int p,int q,int r)
		{
			h=p;
			m=q;
			s=r;
		}
		void showtime1()
		{
			cout<<endl<<"time1 is:"<<h<<":"<<m<<":"<<s<<endl; 
		}
	
		void gettime2(int a,int b,int c)
		{
			hh=a;
			mm=b;
			ss=c;
		}
		void showtime2()
		{
			cout<<"Time2 is:"<<hh<<":"<<mm<<":"<<ss<<endl; 
		}
		void addtime()
		{
			cout<<endl<<"Added time is:"<<hh+h<<":"<<mm+m<<":"<<ss+s; 
	}
};
int main()
{
	int p,q,r;
	int a,b,c;
	time t;
	
	cout<<"Enter hour:";
	cin>>p;
	cout<<"Enter minute:";
	cin>>q;
	cout<<"Enter seconds:";
	cin>>r;
	t.gettime1(p,q,r);
	
	cout<<endl<<"Enter hour:";
	cin>>a;
	cout<<"Enter minute:";
	cin>>b;
	cout<<"Enter seconds:";
	cin>>c;
	t.gettime2(a,b,c);
	
	t.showtime1();
	t.showtime2();
	t.addtime();
}

