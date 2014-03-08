//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

main()
{

for(int i=0, ile=0;ile<20;i++)
if(i%2!=0 && i%3!=0 && i%5!=0)
{
cout << i <<endl;
ile++;
}
system("pause");
return 0;     
}
