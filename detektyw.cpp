#include<iostream>
#include<algorithm>
using namespace std;

int d,n,z,kto[20000],kogo[20000],osoby[10000],sprawdz,lol,ggg;
string co[20000];



int quick(int l, int p)
{
  int v=kto[(l+p)/2];
  int i,j;
  i=l;
  j=p;
  do
  {
    while (kto[i]<v) i++;
    while (v<kto[j]) j--;
    if (i<=j)
    {
      swap(kto[i],kto[j]);
      swap(co[i],co[j]);
      swap(kogo[i],kogo[j]);
      i++;
      j--;
    }
  }
  while (i<=j);
  if (l<j) quick(l,j);
  if (i<p) quick(i,p);
}   




main()
{
ios_base::sync_with_stdio();

cin >> d;

for(int i=0;i<d;i++)
{
   cin >> n >> z;
   ggg=0;
   lol=0;
   for(int x=0;x<z;x++)
   {
      cin >> kto[x] >> co[x] >> kogo[x];
      if(co[x][0]=='W')
         osoby[kto[x]-1]=x;
      else
      if(co[x][0]=='P')
      {
         kogo[x]=kogo[osoby[kto[x]-1]];
         if(co[osoby[kto[x]-1]][0]=='W')
         co[x]='W';
         else
         if(co[osoby[kto[x]-1]][0]=='N')
         co[x]='N';
      }  
      else
      if(co[x][0]=='F')
      {
         if(co[osoby[kto[x]-1]][0]=='W')
         co[x]='N';
         else
         if(co[osoby[kto[x]-1]][0]=='N')
         co[x]='W';
      }
   
   quick(0,n);
   
   for(int g=0;i<n;i++)
   {
   osoby[g]=0;
   sprawdz=0;
   for(int xx=0;xx<d;xx++)
   {
   if(sprawdz==0)
   {
      if(co[xx][0]=='N' && kogo[xx]==g+1)
      {
         osoby[g]++;
         sprawdz++;
      }
      if(co[xx][0]=='W' && kogo[xx]!=g+1)
      {   
         osoby[g]++;
         sprawdz++;
      }
   }     
   if(xx==d && lol>=sprawdz)
   {
      lol=sprawdz;
      osoby[ggg]=lol;
      kto[ggg]=g+1;
      ggg++;
   }
   }
   }
   
   lol=0;
   for(int i=ggg;i>0;i--)
   if(osoby[i-1]!=osoby[i])
   {
   break;
   lol++;   
   }
   
   for(int i=ggg-lol;i<ggg;i++)
   cout<<kto[i];

   
   
   
   
   
   }
for(int x=0;x<z;x++)
cout<<kto[x]<<" "<<co[x]<<" "<<kogo[x]<<endl;

}



return 0;
}
