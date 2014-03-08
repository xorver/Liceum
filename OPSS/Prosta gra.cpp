#include<iostream>
using namespace std;

int n,m,lol; 

main()
{
ios_base::sync_with_stdio(0);

cin >> n >> m;

if(m>n)
{
lol=m;
m=n;
n=lol;
}

if(m==1)
{
cout << (n+1)/2 << endl;


}
else
if(m%3==0 || n%3==0)
cout << "2"<<endl;
else
cout << "1"<<endl;




return 0;
}
