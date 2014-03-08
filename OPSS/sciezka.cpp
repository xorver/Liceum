#include<iostream>
using namespace std;

int c,n,ilosc=0,ile=0;
string a[1000];
int sciezka[1000000][2];



void kroki(int y, int x)
{

ile++;
sciezka[ilosc+ile-1][0]=x+1;
sciezka[ilosc+ile-1][1]=y+1;

if(a[y][x]=='g')
{   
   a[y][x]='x';
   if(y!=n-1)
   kroki(y+1,x);
   
}
else
if(a[y][x]=='l')
{   
   a[y][x]='x';
   if(x!=0)
   kroki(y,x-1);
}
else
if(a[y][x]=='p')
{
   a[y][x]='x';
   if(x!=n-1)
   kroki(y,x+1);
}
else
if(a[y][x]=='d')
{
   a[y][x]='x';
   if(y!=0)
   kroki(y-1,x);
}
else
if(a[y][x]=='.')
{
   a[y][x]='x';
   ilosc+=ile;
   ile=0;
   if(y!=n-1)
      kroki(y+1,x);
   ile=0;
   if(x!=0)
      kroki(y,x-1);
   ile=0;
   if(x!=n-1)
      kroki(y,x+1);
   ile=0;
   if(y!=0)
      kroki(y-1,x);
}
else
if(a[y][x]=='k')
{
   ilosc+=ile;
   return;
}
else
if(a[y][x]=='x')
   ile=0;
}


void zaczynamy()
{
ilosc=0;
ile=0;
kroki(0,0);
}


main()
{
ios_base::sync_with_stdio(0);



cin >> c;

for(int i=0;i<c;i++)
{
   cin >> n;
   for(int x=n-1;x>=0;x--)
   cin >> a[x];
   
   zaczynamy();

   
   
   cout<<ilosc<<endl;
   for(int q=0;q<ilosc;q++)
   cout<<sciezka[q][0]<<" "<<sciezka[q][1]<<endl;


}


return 0;
}
