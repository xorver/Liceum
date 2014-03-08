#include <iostream>
#include <algorithm>
using namespace std;

int N;
int cena[1000],index[1000];
int w;

//void zeruj ()
//{
//     for (int i = 0; i < N; i++)
//     {
//         cena[i] = 0;
//         cena[i] = 0;
//     }
//}

void wczytaj ()
{
     for (int i = 0; i < N; i++)
     {
         cin >> cena[i];
         index[i] = i+1;
     }
  for(int i=0;i<N;i++)
cout<<cena[i]<<" "<<index[i]<<endl;   

}

int znajdz (int L)
{
    int p;
    p=0;                                        //lepiej jak chcesz zerowac przy kazdym obrocie napisac to osobno bo moze nie dzialac jak nalezy z intem
    for (int i = 0; i < L; i++)                 //zamienilem N na L i sortowanie gra :D
       if (cena[i] > cena[p])
          p = i;
    return p;
}

void kolejnosc ()
{
     for (int L = N-1; L >= 1; L--)
     {
         int m;
         m=znajdz(L);
         if(cena[m]<=cena[L])
         continue;
         swap(cena[m],cena[L]);
         swap(index[m],index[L]);        //dopisalem zeby zamienial tez indeksy, takto przesuwal ceny a numery ofert 
     }                                         //zostawaly w formie 1, 2, 3, ...
}

//void sortuj ()
//{
//     for (int L = N; L >= 2; L--)
//     {
//         for (int m = 0; m <= L-2; m++)
//         {
//             if (cena[m][0] > cena[m+1][0])
//             {
//                         int x = cena[m][0];
//                         cena[m][0] = cena[m+1][0];
//                         cena[m+1][0] = x;
//             }
//         }
//     }
//}


void lakiery ()
{
     w = (cena[N-1] - cena[N-2]);
     
     for (int i = N-2; i > 0; i--)                        
     {                                                    
         if ((cena[i] - cena[i-1]) < w)           
            { w = (cena[i] - cena[i-1]); }
     }
     //cout << w << endl;
}

void wypisz ()
{
     for (int i = 0; i < N; i++)                        
     {
         if (w == (cena[i+1] - cena[i]))                    
            cout<<index[i]<<" "<<index[i+1]<<endl;
     }
}

int main ()
{
    cin >> N;
    
//    zeruj ();
    wczytaj ();
   // sortuj ();
    kolejnosc ();
    lakiery ();
    wypisz ();


    return 0;
}
