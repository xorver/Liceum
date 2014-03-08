#include<iostream>
#include<cmath>
using namespace std;


main()
{

int n, m;      //n-pionowe numerowane w prawo, m-poziome numerowane w dol
int **w_zabytkow, **w_posterunkow, **wynik_koncowy;
int z, p, odl_1;
cin >> n >> m >> z >> p;


w_zabytkow=new int *[z];
w_posterunkow=new int *[p];
wynik_koncowy=new int *[p];

for(int i=0;i<z;i++)
w_zabytkow[i]=new int [2];

for(int i=0;i<p;i++)
{
w_posterunkow[i]=new int [4];
wynik_koncowy[i]=new int [3];
}

for(int i=0;i<p;i++)
{
wynik_koncowy[i][0]=0; 
wynik_koncowy[i][1]=0; 
wynik_koncowy[i][2]=0;
}

for(int i=0;i<z;i++)
cin >> w_zabytkow[i][0] >> w_zabytkow[i][1];

for(int i=0;i<p;i++)
cin >> w_posterunkow[i][0] >> w_posterunkow[i][1] >> w_posterunkow[i][2] >> w_posterunkow[i][3];


for(int a=0;a<p;a++)
{
   double porownywacz,porownywacz2;
   if(w_posterunkow[a][0]==w_posterunkow[a][2] && w_posterunkow[a][1]==w_posterunkow[a][3])
      wynik_koncowy[a][2]+=z;
   
   
   
   
   
   
   
   
   
   else
   if(w_posterunkow[a][0]==w_posterunkow[a][2])
   {
         porownywacz = (w_posterunkow[a][1] + w_posterunkow[a][3]) /2;
         for(int i=0;i<z;i++)
         if(porownywacz > w_zabytkow[i][1])
            wynik_koncowy[a][0]++; 
         else
         if(porownywacz < w_zabytkow[i][1])
            wynik_koncowy[a][1]++;
         else
         if(porownywacz==w_zabytkow[i][1])
            wynik_koncowy[a][2]++;
   }
   
  
  
  
  
  
  
  
  
  
  
  
  
   else
   if(w_posterunkow[a][1]==w_posterunkow[a][3])
   {
      porownywacz = (w_posterunkow[a][0] + w_posterunkow[a][2]) /2;
      for(int i=0;i<z;i++)
         if(porownywacz > w_zabytkow[i][0])
            wynik_koncowy[a][0]++;
         else
         if(porownywacz < w_zabytkow[i][0])
            wynik_koncowy[a][1]++;
         else
         if(porownywacz==w_zabytkow[i][0])
            wynik_koncowy[a][2]++;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   else
   if(abs(w_posterunkow[a][0]-w_posterunkow[a][2])==abs(w_posterunkow[a][3]-w_posterunkow[a][1]))
   {
      if(w_posterunkow[a][0]<w_posterunkow[a][2] && w_posterunkow[a][1]<w_posterunkow[a][3] ||
         w_posterunkow[a][0]>w_posterunkow[a][2] && w_posterunkow[a][1]>w_posterunkow[a][3])
      {
         porownywacz=w_posterunkow[a][0] + w_posterunkow[a][3];
         for(int i=0;i<z;i++)
         {
         if(w_zabytkow[i][1]==-w_zabytkow[i][0]+porownywacz)
         wynik_koncowy[a][2]++;
         else
         if(w_zabytkow[i][1]>-w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][0]++;
         else
         if(w_zabytkow[i][1]>-w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]<w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         if(w_zabytkow[i][1]<-w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         wynik_koncowy[a][0]++;
         }
      }
     
     
     
     
      else
      {
      porownywacz=abs(w_posterunkow[a][0] - w_posterunkow[a][3]);
      
         for(int i=0;i<z;i++)
         {
         if(w_zabytkow[i][0]>=w_zabytkow[i][1])
         {
         if(w_zabytkow[i][1]==w_zabytkow[i][0]-porownywacz)
         wynik_koncowy[a][2]++;
         else
         if(w_zabytkow[i][1]>w_zabytkow[i][0]-porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][0]++;
         else
         if(w_zabytkow[i][1]>w_zabytkow[i][0]-porownywacz && w_posterunkow[a][1]<w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         if(w_zabytkow[i][1]<w_zabytkow[i][0]-porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         wynik_koncowy[a][0]++;
         }
         else
         {
         if(w_zabytkow[i][1]==w_zabytkow[i][0]+porownywacz)
         wynik_koncowy[a][2]++;
         else
         if(w_zabytkow[i][1]>w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][0]++;
         else
         if(w_zabytkow[i][1]>w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]<w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         if(w_zabytkow[i][1]<w_zabytkow[i][0]+porownywacz && w_posterunkow[a][1]>w_posterunkow[a][3])
         wynik_koncowy[a][1]++;
         else
         wynik_koncowy[a][0]++;
         }
         }
      }
   }
      
   
   
   
   
   else
   {
      porownywacz=abs(abs(w_posterunkow[a][3] - w_posterunkow[a][1]) -  abs(w_posterunkow[a][2]-w_posterunkow[a][0]))/2;
      if(w_posterunkow[a][0]<w_posterunkow[a][2] && w_posterunkow[a][3]>w_posterunkow[a][1])
      {   
      
         porownywacz2=w_posterunkow[a][0]+(w_posterunkow[a][3]-porownywacz);
         for(int i=0;i<z;i++)
         if((w_zabytkow[i][1]==-w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]<-w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
             (w_zabytkow[i][1]<w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]<w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;
      }
      else
      if(w_posterunkow[a][0]>w_posterunkow[a][2] && w_posterunkow[a][3]<w_posterunkow[a][1])
      {
         porownywacz2=w_posterunkow[a][2]+(w_posterunkow[a][1]-porownywacz);
         for(int i=0;i<z;i++)
         if((w_zabytkow[i][1]==-w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]-porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]+porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]<-w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
             (w_zabytkow[i][1]<w_posterunkow[a][1]-porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]<w_posterunkow[a][3]+porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;
      }
      
      
      if(w_posterunkow[a][0]<w_posterunkow[a][2] && w_posterunkow[a][3]<w_posterunkow[a][1])
      {
         porownywacz2=abs(w_posterunkow[a][0]-(w_posterunkow[a][3]+porownywacz));
         
         
         for(int i=0;i<z;i++)
         if(w_zabytkow[i][0]>=w_zabytkow[i][1])
         {
         if((w_zabytkow[i][1]==w_zabytkow[i][0]-porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]>w_zabytkow[i][0]-porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][3]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][1]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;
         }
         else
         {
         if((w_zabytkow[i][1]==w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]<w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][0] && w_zabytkow[i][0]<=w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]<w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]<w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]<w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]>w_posterunkow[a][2]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;
         }
      }
      else
      {
         porownywacz2=abs(w_posterunkow[a][0]-(w_posterunkow[a][3]-porownywacz));
         
         cout<<porownywacz2<<endl<<porownywacz<<endl;
   
         for(int i=0;i<z;i++)
         if(w_zabytkow[i][0]>=w_zabytkow[i][1])
         {
         if((w_zabytkow[i][1]==w_zabytkow[i][0]-porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]>w_zabytkow[i][0]-porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;

         }
         else
         {
         if((w_zabytkow[i][1]==w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]==w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][2]++;
         else
         if((w_zabytkow[i][1]>w_zabytkow[i][0]+porownywacz2 && w_zabytkow[i][0]>=w_posterunkow[a][2] && w_zabytkow[i][0]<=w_posterunkow[a][0]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][1]+porownywacz && w_zabytkow[i][0]<w_posterunkow[a][2]) ||
            (w_zabytkow[i][1]>w_posterunkow[a][3]-porownywacz && w_zabytkow[i][0]>w_posterunkow[a][0]))
            wynik_koncowy[a][1]++;
         else
            wynik_koncowy[a][0]++;


         }
      }
    }  
      

}


for(int i=0;i<p;i++)
cout<< wynik_koncowy[i][0] << " " <<wynik_koncowy[i][1] << " " <<wynik_koncowy[i][2]<<endl;


for (int i=0; i<z; i++)
delete [] w_zabytkow[i];
delete [] w_zabytkow;

for (int i=0; i<p; i++)
{
delete [] w_posterunkow[i];
delete [] wynik_koncowy[i];
}
delete [] w_posterunkow;
delete [] wynik_koncowy;



system("pause");
return 0;     
}
