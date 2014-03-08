#include<iostream>
using namespace std;

int c,n,tab[1000],a=0,h;


main()
{
ios_base::sync_with_stdio(0);

cin >> c;

for(int i=0;i<c;i++)
{
for(int j=0;j<a;j++)
tab[j]=0;

cin >> n;

cin>>a;

for(int g=0;g<a;g++)
tab[g]++;
n-=a;

while(n>0)
{
cin >> h;
for(int g=0;g<h;g++)
tab[g]++;
n-=h;
}  

for(int g=0;g<a;g++)
cout<< tab[g] <<" ";
cout<<endl;

}


return 0;
}
