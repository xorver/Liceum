#include<iostream>
#define KWADR(a) ((a)*(a))
using namespace std;

main()
{
int x=4,p;
cout << (x++) * (x++) <<endl;
p=KWADR(x++);
cout << "p= " << p << ", x teraz = " << x<<endl;
 
system("pause");
}
