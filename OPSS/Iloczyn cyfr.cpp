#include<iostream>
using namespace std;

long long n;
int dwa=0,trzy=0,piec=0,siedem=0;
bool szesc=false;

main()
{
ios_base::sync_with_stdio(0);

cin >>n;

if(n==0)
cout<<"10"<<endl;
else
if(n==1)
cout<<"1"<<endl;
else
{
while(n%2==0)
{
   n/=2;
   dwa++;
}
while(n%3==0)
{
   n/=3;
   trzy++;
}
while(n%5==0)
{
   n/=5;
   piec++;
}
while(n%7==0)
{
   n/=7;
   siedem++;
}

if(n!=1)
cout << "-1"<<endl;
else
{

   if(trzy%2==1 && dwa%3!=0)
   {
   szesc=true;
   trzy--;
   dwa--;
   }
   if(dwa%3==1)
   {
   cout << "2";
   dwa--;
   }
   if(trzy%2==1)
   {
   cout << "3";
   trzy--;
   }
   if(dwa%3==2)
   {
   cout<<"4";
   dwa-=2;
   }
   for(int i=0;i<piec;i++,cout<<"5");
   if(szesc)
   cout << "6";
   for(int i=0;i<siedem;i++,cout<<"7");
   for(int i=0;i<dwa/3;i++,cout<<"8");
   for(int i=0;i<trzy/2;i++,cout<<"9");
   cout<<endl;

}
}

return 0;
}
