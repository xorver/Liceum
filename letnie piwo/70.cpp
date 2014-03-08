#include<iostream>
using namespace std;

main()
{
int ile=0;

for (int i=0;ile<25;i++)
    if(i%7==0 && i%3==0 || i%5==0 && i%2==0)
       continue;
    else
       {
       cout << i <<endl;
       ile++;
       }
    
 system("pause");
 return 0;
}
