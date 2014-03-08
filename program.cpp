#include<iostream>
using namespace std;

int L1[11],L2[11],akt;

int main()
{
    for(int i=1;i<=10;i++)
       cin >> L1[i];
    for(int i=1;i<=12;i++)
       L2[i]=i;
       
       for(int i=1;i<=10;i++)
       {
          for(int j=1;j<=12;j++)
          {
             bool wystapila=false;
             for(int k=1;k<=10;k++)
                if(L2[j]==0 || L1[k]==L2[j])
                   wystapila=true;
             if(!wystapila)
             {
                cout<<"("<<j<<", "<<L1[i]<<")"<<endl;
                L1[i]=0;
                L2[j]=0;
                break;
             }
          }         
       } 
       for(int i=1;i<=12;i++)
          if(L2[i]!=0)
             cout<<L2[i]<<" ";
             
             cout<<endl;  
    system("pause");
}
