#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int maths,dl,it,c;
	float total,percentage;
	cout<<"enter marks of maths,DL,IT and C"<<endl;
	cin>>maths>>dl>>it>>c;
	total=maths+dl+it+c;
	percentage=(total/400)*100;
	cout<<"Subject   "<<setw(10)<<"Marks"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Maths     "<<setw(10)<<maths<<endl;
	cout<<"DL        "<<setw(10)<<dl<<endl;
	cout<<"IT        "<<setw(10)<<it<<endl;
	cout<<"C         "<<setw(10)<<c<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Total     "<<setw(10)<<total<<endl;
	cout<<"percentage"<<setw(10)<<percentage;
	return 0; 
}
