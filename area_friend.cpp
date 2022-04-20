//find area of square and rectangle

#include <bits/stdc++.h>
using namespace std;
class box
{
	int length;
	int breadth;
	int side;
	public:
	    void rect(int l,int b)
		{		int a;
		      length=l; breadth=b;		}
	    void sq(int s)
		{
		int a;
		side=s;
		}
	friend int show_rect(box);
	friend int show_sq(box);
};
int show_rect(box b1)
{	return (b1.length*b1.breadth);  }
int show_sq(box b2)
{
	return (b2.side*b2.side);
}
int main()
{
	box b1,b2;
	b1.rect(7,2);
	b2.sq(3);
    cout<<"Area of rectangle : "<< show_rect(b1)<<endl;
    cout<<"Area of square : "<< show_sq(b2)<<endl;
	return 0;
}
