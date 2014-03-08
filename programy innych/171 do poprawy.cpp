#include <iostream>
using namespace std;

//int ile (string zdaM)             -->pewnie zapomniales usunac, bo napisales funkce a nie wywolales jej ;D
//{                                 //zreszta program sobie bez niej i tak radzi ;)
//    zdaM = ' ' + zdaM;
//    int ilosc = 0;
//    for (int i = 0; i < zdaM.size()-1; i++)
//       if (zdaM[i] == ' ' && zdaM[i+1] != ' ')
//          ilosc ++;
//    return ilosc;
//}

void zdanie (string zdM, string zdJ)
{                                    
       string z;
       int i = 1;
      // int j = 1;
       
       z+=zdJ[0];
       
       while (i < zdM.size())
       {
           if (zdM[i-1] == ' ' && zdM[i] != ' ')
           {   z+= zdJ[i-1];
               z+=zdJ[i];
               //z[j-1] = zdJ[i-1]; --> nie wiem czemu ale cos takiego nie chce dzialac, chyba przez to ze string ma na poczatku 
                                      //zerowa dlugosc takze probujesz nadpisac cos czego jeszcze nie ma (nie wiem czy dokladnie o
                                      //to chodzi ale chyba tak xD, lepiej pisac ++ )  dlatego twoj program nic nie wypisywal(pusty ciag),
                                      // gdyby to dzialalo tak jak zaplanowales to wszystko jest ok, z tym ze brakowalo koncowego i poczatkowego
                                      //znaku, ktore dodalem juz przed i za petla (obok nich nie ma spacji)
              // j++;                   
           }
           else if (zdM[i-1] != ' ')
           {   z+= zdM[i-1];  }
           
       i++;
      // j++;
       }
       
       z+=zdM[zdM.size()-1];

       cout << z << endl;
}

int main ()
{
    //string zd; -->nie potrzeba tego, lepiej zadeklarowac w funkcji
    string zdanieM;
    string zdanieJ;
    getline (cin, zdanieM);
    getline (cin, zdanieJ);
    
    zdanie(zdanieM, zdanieJ);
    
    system("pause");
    return 0;
}
