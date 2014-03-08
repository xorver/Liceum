//kopiec binarny
//kolejka pirorytetowa - przeczytac
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX=1000;
int heapsize=0;
int A[MAX]={7, 6, 5, 10, 9, 8, 3, 4, 1, 2};

int parent(int i)
{
return (i+1)/2-1;
}

int left(int i)
{
return (2*i+1);
}

int right(int i)
{
return (left(i) + 1);
}

void heapify(int i)
{
int l=left(i), r=right(i);
int largest;
if(l<heapsize && A[l]>A[i])
   largest=l;
else
   largest=i;
if(r<heapsize && A[r] > A[largest])
   largest=r;
if(largest!=i)
{
   swap(A[i],A[largest]);
   heapify(largest);
}
}

void buildheap(int size)
{
heapsize=size;
for(int i=heapsize/2 -1;i>=0;i--)
heapify(i);
}

int heapextractmax()
{
int m=A[0];
heapsize--;
A[0]=A[heapsize];
heapify(0);
return m;
}


void heapsort(int size)
{
buildheap(size);

for(int i=size-1;i>0;i--)
{
   swap(A[i],A[0]);
   heapsize--;
   heapify(0);
}

}


void heapinsert(int a)
{
A[heapsize]=a;
heapsize++;
buildheap(heapsize);
}

main()
{
buildheap(10);

heapinsert(23);
heapinsert(2323);
heapinsert(5);
heapinsert(18);




heapsort(14);



for(int i=0;i<14;i++)
cout << A[i] <<endl;


    system("pause");
return 0;

}
