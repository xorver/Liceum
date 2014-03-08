#include<iostream>
using namespace std;

int d,n,z,kto[20000],kogo[20000],osoby[10000],kopia,l_klamcy[10000],porownanie=0;
string co[20000];
bool klamcy[10000][10000];




main()
{
ios_base::sync_with_stdio();

cin >> d;

for(int i=0;i<d;i++)
{
   cin >> n >> z;
   
  for(int x=0;x<n;x++)
  for(int y=0;y<n;y++)
  klamcy[x][y]=false;
   
   for(int x=0;x<z;x++)
   {
       l_klamcy[x]=0;
      
      cin >> kto[x] >> co[x] >> kogo[x];
      osoby[kto[x]-1]=x;
      if(co[x][0]=='P')
      {
         kopia=osoby[kogo[x]-1];
         kogo[x]=kogo[kopia];
         if(co[kopia][0]=='W')
         co[x]='W';
         else
         if(co[kopia][0]=='N')
         co[x]='N';
      }  
      else
      if(co[x][0]=='F')
      {
         kopia=osoby[kogo[x]-1];
         kogo[x]=kogo[kopia];
         if(co[kopia][0]=='W')
         co[x]='N';
         else
         if(co[kopia][0]=='N')
         co[x]='W';
      }

   
   for(int g=0;g<n;g++)
   if((kogo[x]!=(g+1) && co[x][0]=='W') || (kogo[x]==(g+1) && co[x][0]=='N'))
   klamcy[g][kto[x]-1]=true;
   
     
   }


 

   
for(int x=0;x<n;x++)
for(int y=0;y<n;y++)
if(klamcy[x][y])
l_klamcy[x]++;

porownanie=l_klamcy[n-1];
for(int x=n-1;x>=0;x--)
if(l_klamcy[x]<porownanie)
porownanie=l_klamcy[x];

for(int x=0;x<n;x++)
if(l_klamcy[x]==porownanie)
cout << x+1 <<" ";
cout <<endl;

}




return 0;
}
