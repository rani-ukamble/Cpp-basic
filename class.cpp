#include<iostream>
using namespace std;

class item
{
   int num;
   float cost;
public:
    void getdata(int a,int b);
    
    void putdata()
    {
    cout<<"\nnum= "<<num;
    cout<<"\ncost= "<<cost;
    }
};

void item :: getdata(int a, int b)
{
    num=a;
    cost=b;
}


int main()
{
    item x,y;
    
    x.getdata(2,3);
    x.putdata();
    
    cout << "\n";
    
    y.getdata(12,13);
    y.putdata();
   
    return 0;
}
