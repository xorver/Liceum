#include<iostream>
using namespace std;

main()
{
 string *a, lul;
 int b;
 cin >> b;
 getline(cin, lul); // usuwa z bufora koniec wiersza

 a = new string [b];
 for(int i=0; i<b; i++)
   getline(cin,a[i]);
 for(int i=0; i<b; i++)

   cout << i << ' ' << a[i] << endl;

 system("pause");
}
