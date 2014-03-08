#include<iostream>
using namespace std;



main()
{
int a,b,aa,bb,k=2;
cin >> a >> b;
aa=a;
bb=b;

while(aa!=bb)
if(aa>bb) 
aa=aa-bb;
else 
bb=bb-aa;

a=a/aa;
b=b/aa;

while(b>=1)
{
    if(b%k==0)
       {
       if(k==5 || k==2)
       {
       b=b/k;
       continue;
       }
       else
       {
       cout << "NIE" <<endl;
       break;
       }
       }
    else
    k++;
    
    if(b==1)
    {
    cout << "TAK" <<endl;
    break;
    }

}


 system("pause");
 return 0;
}
