//queue - .front() - pierwszy element .pop() - wywalic pierwszy

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

int n,m,licz=0,ktory=0;
bool jestOdwiedzone[101];
vector<int> polaczenia[101];
string nazwy[101];
 
void idz(int numer)
{
if(jestOdwiedzone[numer])
return;
jestOdwiedzone[numer]=true;
licz++;
for(int i=0;i<polaczenia[numer].size();i++)
idz(polaczenia[numer][i]);
}

int numer(string tmp)
{
    for(int i=1;i<101;i++)
    if(nazwy[i]==tmp)
    return i;
    ktory++;
    nazwy[ktory]=tmp;
    return ktory;

}
 
int main()
{

    cin >> n >> m;
    
    string a,b;
    int na,nb;
    for(int i=0;i<m;i++)
    {
        cin >>a>>b;
        na=numer(a);
        nb=numer(b);
        polaczenia[na].push_back(nb);
        polaczenia[nb].push_back(na);
    }
       idz(1);
       if(licz==n)
       cout <<"TAK \n";
       else
       cout <<"NIE \n";

    return 0;
}
