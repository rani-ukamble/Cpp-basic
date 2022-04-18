#include <iostream>
#include <cstdio>
using namespace std;

class complex
{
	float x,y;
	public:
	complex(){};//constructor-default
	complex(float a)
	{
		x=y=a;
	}
	complex(float real, float imag)
	{
		x=real;
		y=imag;
	}
	
	friend complex sum(complex,complex);
	friend void show(complex);
};

complex sum(complex c1 ,complex c2)//friend
{
	complex c3;
	c3.x=c1.x=+c2.x;
	c3.y=c1.y+c2.y;
	return(c3);	
}

void show(complex c)
{
	cout<<c.x<<" + j "<<c.y<<endl;
}

int main()
{
	complex A(2.7,3.5);
	complex B(1.6);
	complex C;
	
	C=sum(A,B);
	cout<<"A = "<<endl; show(A);
    cout<<"B = "<<endl; show(B);
	cout<<"C = "<<endl; show(C);
	
	show(C);
}
