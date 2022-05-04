#include<iostream>
using namespace std;

int main()
{
    
    int num[46],*ptr;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>num[i];
    }
    int sum=0;
    ptr=num;
    for(i=0;i<n;i++)
    {
    if(*ptr%2==0)
    sum=sum+*ptr;
    ptr++;
    }
    
    cout << "sum of even numbers is "<<sum;
    return 0;
}
