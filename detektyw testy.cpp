#include<iostream>
#include<algorithm>
using namespace std;

int d,n,z,kto[20000],kogo[20000],osoby[10000],kopia,l_klamcy[10000],porownanie=0;
string co[20000];
bool klamcy[10000];




main()
{
ios_base::sync_with_stdio();

cin >> d;

for(int i=0;i<d;i++)
{
   cin >> n >> z;
   
   for(int x=0;x<n;x++)
   l_klamcy[x]=0;
   
   for(int x=0;x<z;x++)
   {
      
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
   
   for(int g=1;g<=n;g++)
   if(kogo[x]!=g && co[x][0]=='W')
   {
      //if(!klamcy[g-1])
         l_klamcy[g-1]++;
      //klamcy[g-1]=true;
   }
   else
   if(kogo[x]==g && co[x][0]=='N')
   {
      //if(!klamcy[g-1])
      l_klamcy[g-1]++;
      //klamcy[g-1]=true;
   }
   
   porownanie=l_klamcy[0];
   for(int gg=n-1;n>=0;gg--)
   if(l_klamcy[gg]<porownanie)
   porownanie=l_klamcy[gg];
   
   for(int gg=0;gg<n-1;gg++)
   if(l_klamcy[gg]==porownanie)
   cout << gg+1 <<" ";
   cout << endl;

   
   
   }
   
//   for(int yyy=0;yyy<n;yyy++)
//   if(!klamcy[yyy])
//   cout<<"a"<<endl;
//   else
//   cout<<"b"<<endl;
//   
//   for(int xxx=0;xxx<n;xxx++)
//   cout<<l_klamcy[xxx]<<endl;
//   
//for(int x=0;x<z;x++)
//cout<<kto[x]<<" "<<co[x]<<" "<<kogo[x]<<endl;
//cout<<endl;
//cout<<osoby[0]<<" "<<osoby[1]<<" "<<osoby[2]<<" "<<osoby[3]<<endl;
}



return 0;
}
