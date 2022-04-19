//Program to add two complex numbers using friend function 

#include<iostream>
using namespace std;

class complex
{
float real,imag;
public:
void set()
{
cout<<"\nenter real and imag part ";
cin>>real>>imag;
}
friend complex sum(complex,complex);
void display();
};

void complex::display()
{
cout<<"\nthe sum of complex num is "<<real<<"+i"<<imag;
}

complex sum(complex a,complex b)
{
complex t;
t.real=a.real + b.real;
t.imag=a.imag + b.imag;
return t;
}

int main()
{
complex a,b,c;
a.set();
b.set();
c=sum(a,b);
c.display();

return(0);
}
