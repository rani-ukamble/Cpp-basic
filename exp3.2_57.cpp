#include<bits/stdc++.h>
using namespace std;
class l
{
	public: 
		int len=20;
	   
};
class b
{
	public:
		int bre=30;
};
class res:public l, public b
{
    public:
		int a;
		int p;
		
		void result()
		{
		a=len*bre;
		p=(2*(len+bre));
		cout<<"Area of rectangle = "<<a<<endl;
        cout<<"Perimeter of rectangle = "<<p<<endl;
		}
	
};
int main()
{
	res s;
	s.result();
}
