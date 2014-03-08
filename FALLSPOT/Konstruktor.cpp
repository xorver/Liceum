#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
int n,a,b,c;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
   scanf("%d %d %d",&a,&b,&c);
   if(max(max(a,b),c) < min(min(a+b,a+c),b+c))
      printf("TAK\n");
   else
      printf("NIE\n");
}
return 0;
}
