#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int z,n,minY=1000000000,nrmin;

struct pktX
{
   int nr;
   int x;
   int y;
};

bool operator < (pktX a, pktX b)
{
if(a.x<b.x)
return true;
else if(a.x==b.x && a.y<b.y)
return true;

return false;
}


struct pktY
{
int nr;
int x;
int y;
};

bool operator < (pktY a,pktY b)
{
if(a.y<b.y)
return true;
else if(a.y==b.y && a.x<b.x)
return true;

return false;
}

struct pkt
{
int x;
int y;
int sasx;
int sasy;
};

pktX poX[100001];
pktY poY[100001];
pkt all[100001];


int bylaJedynka;

void wypisuj(int ktory,int poprz, bool popX)
{
if(bylaJedynka==0)
{
   //printf("%d",ktory);
   if(ktory==1)
   bylaJedynka=1;
   
   if(popX)
   wypisuj(all[ktory].sasy,ktory,false);
   else
   wypisuj(all[ktory].sasx,ktory,true);
}
else if(bylaJedynka==1)
{
//printf("%d",ktory);
   if(ktory==1)
   {
      if(popX)
      {
         if(all[poprz].x<all[ktory].x)
	 printf("E");
	 else
	 printf("W");
      }
      else
      {
         if(all[poprz].y<all[ktory].y)
	 printf("N");
	 else
	 printf("S");
      }
      return;
   }
   if(popX)
   {
      if(all[poprz].x<all[ktory].x)
      printf("E");
      else
      printf("W");
   
      wypisuj(all[ktory].sasy,ktory,false);
   }
   else
   {
      if(all[poprz].y<all[ktory].y)
      printf("N");
      else
      printf("S");
   
      wypisuj(all[ktory].sasx,ktory,true);
   }
}
}

int main()
{
scanf("%d",&z);
for(int i=0;i<z;i++)
{
   bylaJedynka=0;
   minY=1000000002;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
   scanf("%d%d",&all[i].x,&all[i].y);
   poX[i].nr=i;
   poY[i].nr=i;
   poX[i].x=all[i].x;
   poY[i].x=all[i].x;
   poX[i].y=all[i].y;
   poY[i].y=all[i].y;
   if(minY>all[i].y)
   {
      minY=all[i].y;
      nrmin=i;
   }
   }
   sort(poX+1,poX+n+1);
   sort(poY+1,poY+n+1);
   /*for(int k=1;k<=n;k++)
   printf("%d %d\n",poX[k].nr,poY[k].nr);*/
   for(int c=2;c<=n;c+=2)
   {
      all[poX[c].nr].sasy = poX[c-1].nr;
      all[poX[c-1].nr].sasy = poX[c].nr;
      all[poY[c].nr].sasx = poY[c-1].nr;
      all[poY[c-1].nr].sasx = poY[c].nr;
   }
   //for(int k=1;k<=n;k++)
   //printf("%d %d\n",all[k].sasx,all[k].sasy);
   /*
   int v=all[1].sasx;
   int vv=all[v].sasx;
   if(all[1].x>all[v].x && all[vv].x > all[1].x) //1
      wypisuj(all[1].sasx,1,true);
   else if(all[1].x>all[v].x && all[vv].x <)
   */
   
   if(all[nrmin].x>all[all[nrmin].sasx].x)
   wypisuj(all[nrmin].sasx,nrmin,true);
   else
   wypisuj(all[nrmin].sasy,nrmin,false);
   printf("\n");
   /*
   if(all[1].x > all[all[1].sasx].x && all[1].y < all[all[1].sasy].y)   //lewo i gora
      wypisuj(all[1].sasx,1,true);
   else if(all[1].x < all[all[1].sasx].x && all[1].y < all[all[1].sasy].y) //prawo i gora
      wypisuj(all[1].sasy,1,false);
   else if(all[1].x > all[all[1].sasx].x && all[1].y > all[all[1].sasy].y) //lewo i dol
      wypisuj(all[1].sasx,1,false);
   else //prawo dol
      wypisuj(all[1].sasy,1,true);
*/
//printf("%d\n",nrmin);
}

return 0;
}
