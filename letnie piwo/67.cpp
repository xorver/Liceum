#include<iostream>
using namespace std;

main()
{
int ile=0;

for(int i=0;ile<20;i+=2)
{
      if(i%5!=0 && i%3!=0)
      {
                cout << i <<endl;
                ile++;
      }
}
 system("pause");
 return 0;
}
