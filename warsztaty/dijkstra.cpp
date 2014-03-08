#include<cstdio>
#include<queue>
#include<vector>
#include<utility>
using namespace std;

vector<pair<int,int> > G[50];
int waga[50];
priority_queue<pair<int,int>, vector<pair<int,int> >,cmp()> kolejka;

struct cmp
{
   bool operator ()(pair<int,int> &a,pair<int,int> &b)
   const{
   if(a.second>b.second) return true;
   else return false;
   }
};

void dijkstra(int a)
{
   pair<int,int> tmp;
   tmp.first=a;
   tmp.second=0;
   kolejka.push(tmp);
   
   while(!kolejka.empty())
   {
      tmp=kolejka.top();
      kolejka.pop();
      if(tmp.second==waga[tmp.first()])
      {
         for(vector<pair<int,int> >::iterator it=G[tmp.first].begin();it!=G[tmp.first].end();it++)
            if(waga[it->first]>it->second+waga[tmp.first])
      
      }
      
   }
     
}


int main()
{
    
return 0;
}
