#include<iostream>
using namespace std;


main()
{
int a;
cin >> a;

for(int i=2;i<=a;i++)
        if(a%i==0)
        {
           cout << i <<endl;
           break;
        }


 system("pause");
 return 0;
}
