# include <iostream>
using namespace std;

const int N1 = 50;
const int N2 = 50;
int K1;
int K2;
string kl1 [N1];
string kl2 [N2];
string i1 [N1];
string i2 [N2];
string help;

void wczytaj ()
{
         getline(cin,help); // jak wczytujesz cinem to zostaje w buforze odczytu znak konca linii, ktorego normalny cin nie
                            //widzi, a getline to zczytuje, przez co traktuje to tak jakby to bylo wpisane przez nas imie,
                            //dlatego trzeba zadeklaroac jakiegos niepotrzebnego nam stringa i przy jego pomocy oczyscic bufor
                            //przed dalszym wczytywaniem 
     for (int i = 0; i < K1; i++) //pomijal jedno imie i nazwisko bo zaczynales od i=1
     {
         getline (cin, kl1[i]);   //musza byc na odwrot, bo inaczej getline nadpisuje ta spacje
         kl1[i] = ' ' + kl1[i];
     }
     for (int i = 0; i < K2; i++)
     {
         
         getline (cin, kl2[i]);
         kl2[i] = ' ' + kl2[i];
     }
}

void wybierz ()
{
     for (int i = 0; i < K1; i++)
     {   for (int j = 0; j < kl1[i].size(); j++) //nie dochodzil do konca tablicy
         {
            if (kl1[i][j] == ' ') //drugi czlon niepotrzebny, zaufaj Dyrkowi ze nie da zlosliwych danych xD
            {
               i1[i]+= kl1[i][j+1];  //zapisywalo pierwsza litere imienia i nazwiska w tej samej komorce(usuwalo imie)   
            }
         }
     }
     
     for (int i = 0; i < K2; i++)
     {
         for (int j = 0; j < kl2[i].size(); j++) // all jw.
         {
             if (kl2[i][j] == ' ')
             {
                i2[i]+= kl2[i][j+1]; 
             }
         }
     }
//}     
     int ilosc = 0;
     for (int i = 0; i < K1; i++)  //nie dochodzil do konca
     {
         for (int j = 0; j < K2; j++) //koncepcja z tym +2 byla dobra ale musialbys miec 2* taka tablice z inicjalami, mniej roboty jest
         {                            //z zapisaniem po prostu 2 liter w jednym stringu
             if (i1[i][0]==i2[j][0] && i1[i][1]==i2[j][1]) // jak porownujesz w taki sposob to on sobie chyba na inty zamienia takze moze byc
             {                                     // blad jesli te 2 pary liter zapisane w ASCII maja w sumie taka sama wartosc
                       ilosc ++;
             }
         }
     }
     cout << ilosc << endl;
}

int main ()
{
    cin >> K1;
    cin >> K2;
    wczytaj ();
    wybierz ();
    

    return 0;
}
