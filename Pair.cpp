#include<bits/stdc++.h>
#include <utility>
using namespace std;

//pair is not a part of container container


    
int main()
{
    //making pairs
    pair<string,int>p1;
    pair<int,int>p2;
    pair<int, int>p3;
    
    //initialisation in pairs
    p1=make_pair("Rana",22);
    p2=make_pair(67,22);
    
    p3.first=23;
    p3.second=89;
    
   /* student s1;
    s1.set(34,"Vishal");
    p3=make_pair(29,s1);
    */
    //access pairs
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    
   
    /*swap 
    p1.swap(p2);
    cout<<endl<<endl<<"after swap"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
     */
    
    return 0;
}
