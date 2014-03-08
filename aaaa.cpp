#include<iostream>
using namespace std;


main()
{
      int a,b,c,d;
      for(int i=100; i<1000; i++)
      {
               a=i%10;
               b=i/10;
               c=b%10;
               d=i/100;
               if(i=a*a*a+c*c*c+d*d*d)
               cout<<i<<endl;
      }
system("pause");
return 0;
}
