#include<iostream>
using namespace std;

main()
{
int ile=0,ii;

for (int i=0;ile<5;i++)
   {
      if(i%7==0 && i%3!=0)
         {
         cout << i <<endl;
         ile++;
         }
      else
      if(i%5==0 && i%2==1)
         {
         cout << i <<endl;
         ile++;
         }
         
   }
 system("pause");
 return 0;
}
