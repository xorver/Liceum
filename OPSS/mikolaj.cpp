#include<cstdio>


int main()
{
int n,m;
int obw[3];

scanf("%d %d", &n,&m);

for(int i=0;i<n;i++)
{
scanf("%d %d %d", &obw[0], &obw[1], &obw[2]);
if(m < obw[0])
printf("komin\n");
else
if(m < obw[1])
printf("okno\n");
else
if(m < obw[2])
printf("drzwi\n");
else
printf("brak\n");
}


return 0;
}
