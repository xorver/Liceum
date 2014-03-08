





#include <iostream> 
using namespace std; 
const int MAX=1000; 
int heapsize=0; 
int A[]={7,6,5,10,9,8,3,4,1,2}; 

int parent(int i) 
{ 
return(i+1)/2-1; 
} 

int left(int i) 
{ 
return(2*i+1); 
}
 
int right(int i) 
{ 
return(left(i)+1); 
}
 
void heapify(int i) 
{ 
int l=left(i),r=right(i); 
int largest; 
if(l<heapsize&&A[l]>A[i]) largest=l; 
else largest=i; 
if(r<heapsize&&A[r]>A[largest]) largest=r; 
if(largest!=i) 
{ 
swap(A[i],A[largest]); 
heapify(largest); 
} 
}
 
void buildheap(int size) 
{ 
heapsize=size; 
for(int i=heapsize/2-1;i>=0;i--) 
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
swap(A[0],A[i]); 
heapsize--; 
heapify(0); 
} 
}

 
main() 
{ 
buildheap(10); 
heapsort(10); 
for(int i=0;i<10;cout<<A[i]<<"\n",i++); 
//while(heapsize>0) 
// cout<<heapextractmax()<<endl; 
system("pause"); 
} 
