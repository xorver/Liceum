#include<iostream>
using namespace std;



main()
{
int a,b,k=2;
cin >> a >> b;

while(b>1)
{
    if(b%k==0)
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
    if(b=1)
    cout << "TAK" <<endl;
k++;

}


 system("pause");
 return 0;
}
