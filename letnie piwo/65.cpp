#include<iostream>
using namespace std;

int iloczyncyfr(int x)
{
int iloczyn=1;
    while(x>0)
    {
              
              iloczyn*=x%10;
              x=x/10;
    }
return iloczyn;
}

main()
{
int a;
cin >> a;
cout << iloczyncyfr(a) <<endl;
 system("pause"); 
}
