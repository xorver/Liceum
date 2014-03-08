#include<iostream>
using namespace std;

int T[] = {4,5,2,6,1,9};

void sortuj(int l,int p)
{
     int s=(l+p)/2;
     int key=T[s];
     int i=l, j=p;
     do
     {
         while(T[i]<key)
            i++;
         while(T[j]>key)
            j--;
         swap(T[i],T[j]);
     }while (j!=i);
     
         for(int i=0;i<6;i++)
    cout << T[i] <<endl;
    cout<<endl;
     
    if(i-1-l >0)
        sortuj(l,i-1);
    if(p-(i+1)>0)
        sortuj(i+1,p);
}

int main()
{
    sortuj(0,5);
    
    cout<<endl;
    for(int i=0;i<6;i++)
    cout << T[i] <<endl;
    
    system("pause");
    return 0;
}
