#include<cstdio>

main()
{
int d,n,x,c;
unsigned int goscie=0;

scanf("%d", &d);

for(int i=0;i<d;i++,goscie=0)
{
   scanf("%d", &n);
   for(int a=0;a<n;a++)
   {
      scanf("%d", &x);
      goscie+=x;
   }
   scanf("%d", &c);
   if(goscie!=0)
   printf("%d \n", c%goscie);
   else
   printf("%d \n", c);
}

return 0;
}
