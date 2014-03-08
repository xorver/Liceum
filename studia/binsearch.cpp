#include<cstdio>
#include<iostream>

int a[6];

int main()
{
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=3;
    a[4]=3;
    a[5]=7;
    int l=0,p=5,m;
    int key;
    scanf("%d",&key);
    while( l <= p )
    {
       m = (l+p) / 2;
	   if ( key < a[m] ) 
          p = m - 1;
	   else       
		  l = m + 1;
    }
    printf("%d %d\n",l,p);
    system("pause");
return 0;
}
