//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

main()
{
int a[5],b,p,q,r,s,t;
cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];


for(int i=1; i<5;i++)
{
b=a[0];
if(b<a[i])
{
b=a[i];
p=i;
}
}

if(p==0)
q=1;
else
q=0;

for(int i=0; i<5;i++)
{
if(i==p)
continue;
b=a[q];
if(b<a[i])
{
b=a[i];
q=i;
}
}

if(q || p == 1)
r=2;
else
r=1;

for(int i=0; i<5;i++)
{
if(i==p || q)
continue;
b=a[r];
if(b<a[i])
{
b=a[i];
r=i;
}
}

if(q || r == 2)
s=3;
else
s=2;

for(int i=0; i<5;i++)
{
if(i==p || q || r)
continue;
b=a[s];
if(b<a[i])
{
b=a[i];
s=i;
}
}

if(r || s == 3)
t=4;
else
t=3;

cout << a[p] <<endl<< a[q] <<endl<< a[r] <<endl<< a[s] <<endl<< a[t] <<endl;

system("pause");
return 0;
}
