    int a=100000;

    int b=100000;

    //int c=b*a;

   // cout<<c<<endl;
//output

//1410065408- due to overflow of datatypes


long int c=b*1LL*a;
cout<<c<<endl;
//output
//10000000000


double d1=100000;
double d2=100000;
double c=d1*d2;
//output
//1e+10       : scientific notation




double dd1=100000;
double dd2=100000;
double c=dd1*dd2;
cout<<fixed<<c<<endl;
//output
//10000000000.000000
//no scientific notation
cout<<setprecision(0)<<c<<endl;
//after decimal no. are not printed
//output
//10000000000

cout<<setprecision(2)<<c<<endl; 
//output
//10000000000.00


int d=1e2;
cout<<d<<endl;
//output
//100

 
int d=1e20;
cout<<d<<endl;
//output
//2147483647- 
//hence don't use double for large calculations

  
/*calculation order- decreasing
   double-> float->long long int-> int-> char  */

 

 

    





    

    

    
