#include <iostream>
#include <cstdio>
using namespace std;

class factorial
{
	int v, fact;
	public:
		factorial(int temp)
		{
			v=temp;
		}
		int cal()
		{
			fact=1;
			for(int i=1;i<=v;i++)	
			{
				fact=fact*i;
			}
			return fact;
		}
};

int main() 
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	
	factorial obj(n);
	factorial copy=obj;
	cout<<"\n"<<n<<" Factorial is: "<<obj.cal();
    cout<<"\n"<<n<<" Factorial is: "<<copy.cal();	
}
