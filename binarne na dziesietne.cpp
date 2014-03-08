#include <iostream>

using namespace std;

int bin2dec(string b)
{
int w=0;
for(int i=0;i<b.size();i++)
w=2*w+(b[i]-'0');
return w;   
}


main()
{
string a;
cin>>a;

cout<<bin2dec(a) <<endl;

    system("pause");
}
