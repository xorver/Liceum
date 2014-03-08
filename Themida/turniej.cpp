#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

vector<int> tab[1002];
int odwiedzonyprzez[1002],zilomawygra,n,tmp;     
queue<int> kolejka;
void idz(int k)
{
  while(!kolejka.empty())
  {
    zilomawygra++;
    int x=kolejka.front();
    kolejka.pop();
   // cout << x <<" ";
    for(int i=0;i<tab[x].size();i++)
       if(odwiedzonyprzez[tab[x][i]]<k)
          {
          odwiedzonyprzez[tab[x][i]]=k;
          kolejka.push(tab[x][i]);
          }
  }
     
     
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
          {
               scanf("%d",&tmp);
               if(tmp==1)
                  tab[i].push_back(j);
          }
 /*   for(int i=1;i<=n;i++)
    {
            cout<<i<<" : ";
       for(int j=0;j<tab[i].size();j++)
          cout<<tab[i][j]<<" ";
          cout<<endl;
    }*/
    for(int i=1;i<=n;i++)
    {
       odwiedzonyprzez[i]=i;
       zilomawygra=0;
       kolejka.push(i);
       idz(i);
       //cout<<i<<" "<<zilomawygra<<"\n";
       if(zilomawygra==n)
          printf("TAK\n");
       else
          printf("NIE\n");
    }
    return(0);
}
