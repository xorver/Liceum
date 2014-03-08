#include<iostream>
using namespace std;

#define MOD %500000009
int n;
unsigned long long wynik=1,potega=1;

int main()
{

cin >> n;

for(int i=2;i<=n;i++)
{
   potega=(potega << 1)MOD;
   potega=(potega << 1)MOD; 
   wynik=(wynik+potega)MOD;
}

cout<<wynik<<"\n";

return 0;
}
