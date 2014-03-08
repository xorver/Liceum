#include<iostream>
#include<sstream>
using namespace std;

int str2int(string s)
{
  int wynik = 0;
  for(int i=0; i<s.size(); i++)
  wynik = 10*wynik + s[i] - '0';
  return wynik;
}

main()
{
string s = "1234";
istringstream lol(s);
long long n;
lol >> n;
cout << lol(s) <<endl;
 
system("pause");
return 0; 
     
}
