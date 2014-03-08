#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int>,greater<int> > aa;


int main()
{
aa.push(4);
aa.push(9);
aa.push(15);
aa.push(1);
aa.pop();
cout<< aa.top();

system("pause");
return 0;
}
