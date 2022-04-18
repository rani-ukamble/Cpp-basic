#include <bits/stdc++.h>
using namespace std;

class box
{
	int length;
	public:
	    void set(int l)
		{
		length=l;
		}
	friend int show(box);
};
int show(box b)
{
	return (b.length);
}
int main()
{
	box b;
	b.set(77);
    cout<<"Length of box: "<< show(b)<<endl;
	return 0;
}



