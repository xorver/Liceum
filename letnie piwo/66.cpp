#include<iostream>
using namespace std;

main()
{
int ile=0,a,b,c;

for(int i=100;ile<30;i++)
      {
      a=i%10;
      b=(i/10)%10;
      c=i/100;
      if(a!=b && a!=c && b!=c)
           {
           cout << i <<endl;
           ile++;
           }
      }
 system("pause");
 return 0;
}
