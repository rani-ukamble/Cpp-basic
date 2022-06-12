#include<bits/stdc++.h>
using namespace std;

//function template
template <typename x>
//x is datatype called as place holder
    x big(x a, x b)
    {
    if(a>b)
    return a;
    else 
    return b;
    }
    
int main()
{
    
    cout << big(3,5)<<"\n";
    cout << big(3.6,5.8)<<"\n";
    return 0;
}
