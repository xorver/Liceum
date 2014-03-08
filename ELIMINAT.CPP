#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

// global variable declarations

int nun,neq;
double **sys,*back;
int moreeq=0;

// function prototypes

void solution();
double evaluate(int);
void result();
int consitent();

//function definitions

double evaluate(int g)
{
 int u;
 double rt=0;
 rt=sys[g][nun];
 for(u=0;u<nun;u++)
  {
   if(g==u) continue;
   rt-=sys[g][u]*back[u];
  }
 rt/=sys[g][g];
 return rt;
}

int consistent()
{
 int i,j,n=0;
 for(i=0;i<neq;i++)
  {
   for(j=0;j<nun;j++)
    {
     if(sys[i][j]!=0)
     {
      n++;
      break;
     }
    }
  }
  if(n==neq)
   return 1;
   return 0;
}

void result()
{
int i,j;
 if(!consistent())
 {
  getch();
  clrscr();
  cout<<"\n\n Given system is inconsistent system...\n Solution can't be found\n";
  getch();
  return;
 }
 else
 {
   for(i=nun-1;i>=0;i--)
    {
     back[i]=evaluate(i);
    }
   return;
 }
}

void solution()
{
  int i,j,k,r;
  float c;
  for(r=0;r<neq;r++)
   {
    c=sys[r][r];

      for(k=0;k<=nun;k++)
       {
	sys[r][k]/=c;
       }

     for(i=r+1;i<neq;i++)
      {
       c=sys[i][r];
	for(j=0;j<=nun;j++)
	 {
	  sys[i][j]-=c*sys[r][j];
	 }
      }

    for(i=0;i<neq;i++)
      {
       cout<<"\n\n";
	 for(j=0;j<=nun;j++)
	  {
	   printf("%15.4f",sys[i][j]);
	  }
      }
       cout<<"\n\n";
  getch();
   }
  result();
}

//main program

int main()
{
 int i,j;
 char ch='y';
   do
   {
	 clrscr();
	 cout<<"\n\n\t GAUSS-ELIMINATION METHOD FOR SOLVING A SYSTEM OF EQUATIONS\n\n";
	 cout<<"\n\n  Developed by:G Vijayan  III BE EEE PSG COLLEGE OF TECHNOLOGY",
	 cout<<"\n\n                   COIMBATORE";
	 cout<<"\n Number of Equations:";
	 cin>>neq;
	 cout<<"\n Number of unkowns:";
	 cin>>nun;
	 if(nun>neq)
	  {
	   cout<<"\n\n Data inadequate to find the solution.....";
	   getch();
	   exit(0);
	  }
	 if(neq>nun)
	  moreeq=1;
	  sys=(double **)malloc((neq)*sizeof(double *));
	  back=(double *)malloc((nun)*sizeof(double ));
	 for(i=0;i<neq;i++)
	 {
	   *(sys+i)=(double *)malloc((nun+1)*sizeof(double));
	 }

	 clrscr();
	 printf("\n\n\t ENTER THE COEFFICIENTS OF EQUATIONS\n");
	 for(i=0;i<neq;i++)
	  {
	    cout<<"\n Equation ";
	    cout<<i+1;
	   for(j=0;j<nun;j++)
	   {
	    cout<<"\nx";
	    cout<<j+1;
	    cout<<" : ";
	    cin>>*(*(sys+i)+j);
	    back[i]=0;
	   }
	   cout<<" b";
	   cout<<i+1;
	   cout<<" : ";
	   cin>>*(*(sys+i)+j);
	  }
	 clrscr();
	 cout<<"\n\n\t GIVEN SYSTEM OF EQUATION\n\n";
	 for(i=0;i<neq;i++)
	  {
	   cout<<"\n";
	   cout<<"\t";
	   for(j=0;j<nun;j++)
	    {
	     if(*(*(sys+i)+j)<0)
	     {
	     cout<<"\b";
	     cout<<"\b";
	     }
	     cout<<*(*(sys+i)+j);
	     cout<<" x";
	     cout<<j+1;
	     if(!(j==nun-1))
	     cout<<" + ";
	    }
	   cout<<" = ";
	   cout<<*(*(sys+i)+j);
	  }
     solution();
     getch();
     clrscr();
     cout<<"\n\n\n  \t SOLUTION FOR THE GIVEN SYSTEM OF LINEAR SYSTEM OF EQUATIONS\n\n";

     for(i=0;i<nun;i++)
      {
       cout<<"\n\t";
       cout<<'x';
       cout<<i+1;
       cout<<':';
       cout<<back[i];
      }
      cout<<"\n do u want 2 continue(y/n)  ?  :";
      ch=getch();
   }while(ch=='y');
}
