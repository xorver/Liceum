#include<iostream>
#include<vector>
using namespace std;

int n,t;
vector<int> prz[1000];
char tmp;

void wczytaj()
{
   cin >> n;
   for(int i=0;i<n;i++)
   {
      cin >> t;
      for(int j=0;j<t;j++)
      {
         cin >> tmp;
         prz[i].push_back((int)tmp-'0');
      }
   }
}

int main()
{
wczytaj();



return 0;
}
