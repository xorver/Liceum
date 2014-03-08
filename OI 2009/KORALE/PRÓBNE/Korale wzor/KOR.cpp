#include<iostream>
#include<cstdlib>
using namespace std;

//#define REPTAB(ttt,sss) cout<<"REPORTING ttt:"<<endl; \
//                        for(int i=1;i<=sss;i++)cout<<ttt[i]<<endl; \
//                        cout <<endl


#define MAX 200002

const int pd=200003;
const int dziel=500009;

int n,ciag[MAX],potegipd[100000],h[MAX];

void wczytaj()
{
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&ciag[i]);
   }
}
void liczprefiks()
{
     for(int i=n;i>0;i--)
        h[i]=(ciag[i]+pd*h[i+1])%dziel;
}
//int haszciagu(int a,int b)
//{
//    return ((h[a]-potegipd[b-a+1]*(h[b+1]%mod))%mod);
//}

int main()
{
wczytaj();
liczprefiks();

for(int i=1;i<=n;i++)cout<<h[i]<<endl;

system("pause");
return 0;
}
