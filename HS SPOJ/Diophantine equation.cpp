#include<cstdio>
#include<iostream>
using namespace std;

int tab[10001],t,a;

void ile()
{
     int wynik=0;
for(int a=0;a<180;a++)
for(int b=0;b<=1000;b++)
{
if(a*a*a*a+b*b*b>10000)
break;
for(int c=0;c<31700;c++)
{
if(a*a*a*a+b*b*b+c*c>10000)
break;
for(int d=0;d<=1000000000;d++)
if(a*a*a*a+b*b*b+c*c+d>10000)
break;
else
tab[a*a*a*a+b*b*b+c*c+d]++;

}
}

}

int main()
{
ile();
//scanf("%d",&t);
//for(int i=0;i<t;i++)
//{
//        scanf("%d",&a);
//        printf("%d\n",tab[a]);
//}
for(int i=1;i<1000;i++)
cout<<i<<"  ->  "<<tab[i]<<endl;

return 0;
}
