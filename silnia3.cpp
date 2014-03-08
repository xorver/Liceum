#include <iostream>
using namespace std;
main()
      {
                int x,s=1;
                cout << "Wpisz liczbe, z ktorej chcesz obliczyc silnie";
                cin >> x;
                    while (x>1)
                    {
                          s = s*x;
                          x=x-1;
                          }
                cout <<"Silnia wynosi: "<< s <<endl; 
                system("pause");
                }
