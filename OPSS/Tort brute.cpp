#include<iostream>
using namespace std;

int c,h,wynik=0;
long long n;

main()
{
ios_base::sync_with_stdio(0);

cin >> c;

for(int i=0;i<c;i++)
{
cin >> n;
wynik=0;
h=1;
while(n>1)
{
n-=h;
h++;
wynik++;
}

cout<<wynik<<endl;

}



return 0;
}
