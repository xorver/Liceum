#include<iostream>
using namespace std;

#define MAX 1000002

int l,n,k,ktory,iletrawy=0,ile,ileprzed[MAX],porow,maxile;
char tmp;

void wczytaj()
{
   cin >> n;
   cin >> k;
   ktory=1;
   iletrawy=0;
   for(int x=1;x<=n;x++)
   {
      cin >> tmp;
      if(tmp=='T')
      {
         iletrawy++;
      }
      else
      {
         ileprzed[ktory]=iletrawy;
         iletrawy=0;
         ktory++;
      }
   }
   ileprzed[ktory]=iletrawy;  
}

int main()
{
ios_base::sync_with_stdio(0);    
    
cin >>l;
for(int i=0;i<l;i++)
{
   wczytaj();

   ile=0;
   for(int j=1;j<=k+1 && j<=ktory;j++)
      ile+=ileprzed[j];
   maxile=ile;
   
   if(k>ktory-1)
      cout<<maxile+ktory-1<<"\n";
   else
   {
      for(int j=k+2;j<=ktory;j++)
      {
         ile=ile+ileprzed[j]-ileprzed[j-k-1];
         if(ile>maxile)
            maxile=ile;
         }
      cout<<maxile+k<<"\n";
   }

}


return 0;
}
