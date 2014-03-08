#include<iostream>
using namespace std;

int n,c,m;

void rozklad(int n)
{
  int k=2;
  while(n>1)
    if(n%k==0) 
    {
      cout << k << ' ';
      n = n/k;
    }  
    else k++;
  cout << endl;
}  



main()
{
int n,m;
cin >> n;
rozklad(n);
cin >>m;
rozklad(m);
cout<<n%m<<endl;

cout<<1226%177;

system("pause");


return 0;
}
