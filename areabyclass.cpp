#include<iostream>
#include<math.h>

using namespace std;

class rectangle
{
    int length;
    int breadth;
public:
    int getarea(int l,int b)
    {
        int area;
        area = l * b;
        cout << "Area = " << area<<endl;
    }
   
int getperimeter(int l,int b)
    {
        int peri;
        peri = 2 * (l + b);
        cout << "Perimeter = " << peri<<endl ;
    }
};
int main()
{
    int l,b;
    rectangle r;
    cout << "Enter length of rectangle ";
    cin >> l ;
    cout << "Enter breadth of rectangle ";
    cin >> b ;
    r.getarea(l,b);
    r.getperimeter(l,b);

return 0;
}

