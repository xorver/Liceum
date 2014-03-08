#include <iostream>
using namespace std;

bool pierwsze(int x)
{
     if(x%2==0 && x>2)
     return false;
     for(int i=3;i<x;i+=2)
     if(x%i==0)
     return false;
     return true;
}
main()
{
int n,a;
cin >> n;

for(int i=3;i<n;i+=2)
if(pierwsze(i))
if(pierwsze(i+2))
if(i+2<=n)
cout << i << " " << i+2 <<endl;



      system("pause");
      return 0;
}
