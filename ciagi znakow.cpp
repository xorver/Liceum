//znaki i ciagi znakow, znaki-char, ciagi-string np. char x='a', y='1';
//x++
//cout << x (bedzie wtedy 'b')    a-z i A-Z 26 znakow + 9 polskich
// kod ASCII zawiera 255 znakow
// "a" to co innego niz 'a' (pierwsze to ciag znakow zawierajacy 1 znak)
// '\n' koniec wiersza - endl
// '\t' tabulator
// '\\' backslash
// ' ' 

//string s="xyz", t="abc"
//cout << c+t (wypisze xyzabc)  - ³aczenie(konkatelacja) nie jest przemienne
//x.size() wypisuje rozmiar stringa
//getline(cin,s) wczytuje ca³y ci¹g s pisany z klawiatury 
//isupper() islower() sprawdza czy jest duza i czy jest mala
//toupper() tolower() zmienia na duze i na male
#include <iostream>
using namespace std;

main()
{
string s;
getline(cin,s);
//cout << s <<endl <<s.size()<<endl;

//for(int i=0;i<s.size();i++)
//if(isupper(s[i]))
//s[i]=tolower(s[i]);
//else
//s[i]=toupper(s[i]);

s=' '+s;
int ilosc=0;
for(int i=1;i<s.size();i++)
 if(s[i-1]==' ' && s[i]!=' ')
 ilosc++;
 cout<<ilosc<<endl;

//cout << s << endl;



    system("pause");
}
