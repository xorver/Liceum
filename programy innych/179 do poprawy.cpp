#include <iostream>
using namespace std;

int K;
int N;
int cena[1000];

void wpisz ()
{
     for (int i = 0; i < N; i++)
     {
         cin >> cena[i];
     }
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

void przelicz ()
{    
     int wynik = 0;
     
     for (int i = 0; i < N-1; i++)
     {
         for (int j = i+1; j < N; j++)
         {
             if (cena[i] + cena[j] > K)           //2gi czlon nie potrzeby, w tresci jest ze kazda oferta inna
             {   continue; }
             else 
             if (cena[i] + cena[j] > wynik)
             {   wynik = cena[i] + cena[j]; }
         }
     }

     for (int i = 0; i < N-1; i++)
     {
         for (int j = i + 1; j < N; j++)          //i<N-1 a potem j<n, musi byc tak jak wyzej
         {
             if (cena[i] + cena[j] == wynik)
             {  if (cena[i] < cena[j])
                {   cout << i+1 << " " << j+1 << endl;
                    break; }
                 else 
                {    cout << j+1 << " " << i+1 << endl;
                    break; }
             }
         }
    }
}

int main ()
{
    cin >> N;
    cin >> K;
    
    wpisz ();
    //sortuj ();           //w tym zadaniu nie trzeba sortowac (i tak sprawdzasz kazde z kazdym), jest to tez ulatwienie bo 
    przelicz ();           //nie musimy pamietac indeksow
    

    return 0;
}
