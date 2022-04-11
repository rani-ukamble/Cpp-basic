#include <iostream>
#include <cstdio>
using namespace std;

class prime
{
	int x,k,i;
	public:
		prime(int a)
		{
			x=a;
			
			k=1;
			if(x<2)
			k=0;
			
			for(i=2;i<=a/2;i++)
			{
				if(x%i==0)
				{
					k=0;
					break;
				}
				else 
				k=1;
			}
		}
		
		int show()
		{
		
	        if(k==1)
	        cout<<"\n"<<x<<"  is "<<"PRIME\n";
	        else
	        cout<<"\n"<<x<<"  is "<<"NOT PRIME\n";
		}
};

int main() 
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	
	prime obj(n);

	obj.show();
  	
}
