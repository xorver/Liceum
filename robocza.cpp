#include<iostream>
using namespace std;



main()
{
int a,b,k=2;
double c;
cin >> a >> b;

while(b>1)
{
    if(b%k==0)
       if(k!=5 || k!=2)
          cout << k <<endl;
       else
          cout << "TAK" <<endl;
k++;
}
    

 system("pause");
 return 0;
}
