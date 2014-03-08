#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//#define REPORT(x) cout<<x<<endl
//#define REPTAB(tab,dl) \
//        REPORT("DLA: tab DLUGOSCI:"<<dl); \
//        for(int xx=0; xx<dl; xx++) cout<<tab[xx]<<endl; \
//        cout<<"--------------------"<<endl

vector<unsigned long long> rozwalone;
int n;
unsigned long long tmp,ilenaj,jakduzo;

void rozklad(unsigned long long a)
{
   long long k=2;
   while(k*k<=a)
      if(a%k==0)
         {
         a/=k;
         rozwalone.push_back(k);
         }
      else
         k++;
         
   if(a!=1)
   rozwalone.push_back(a);
}

void rob()
{
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      cin >> tmp;
      rozklad(tmp);
   }
}

void licz()
{
sort(rozwalone.begin(),rozwalone.end());
unsigned long long rozwazany=rozwalone[0];
unsigned long long ind=1;
unsigned long long ile=1;
ilenaj=1;
jakduzo=1;
while(ind<rozwalone.size())
{
   if(rozwazany == rozwalone[ind])
   {   
      ile++;
   }
   else
   {
       if(ile>ilenaj)
       {
          ilenaj=ile;
          jakduzo=1;
       }
       else if(ile==ilenaj)
          jakduzo++;
       rozwazany=rozwalone[ind];
       ile=1;
       
   }
   ind++; 
}

       if(ile>ilenaj)
       {
          ilenaj=ile;
          jakduzo=1;
       }
       else if(ile==ilenaj && ilenaj!=1)
          jakduzo++;

}

int main()
{

rob();    
licz();

printf("%lld\n",ilenaj);
printf("%lld\n",(1 << jakduzo)-1);

return 0;
}
