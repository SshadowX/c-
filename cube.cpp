#include<iostream>
#define SQUARE(x)((x)*(x))
#define CUBE(x)((SQUARE(x)*(x))
using namespace std;
int main()
{
	int n=3;
	cout<<CUBE(n)<<endl;

}
