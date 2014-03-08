// Tomasz Lichoñ

#include<cstdio>
#include<stack>
#include<vector>
#include<iostream>
using namespace std;

#define MAX 100001

int n, wjazd[MAX], wiekszy[MAX], ile = 0, ktory = 1, p, d, nastepny, nizszy;
bool ktorystack[MAX];
stack<int> pierwszy;
stack<int> drugi;
stack<int> suck;


void wczytaj()
{
   scanf("%d",&n);
   
   scanf("%d",&wjazd[0]);
   suck.push(wjazd[0]);
   
   for(int i=1;i<n;i++)
   {  
      scanf("%d",&wjazd[i]);
      while(!suck.empty() && suck.top()<wjazd[i])
      {
         wiekszy[suck.top()]=wjazd[i];
         suck.pop();
      }
      
      suck.push(wjazd[i]);
   }
}

bool pierwszy3drugi(int w) //false - "NIE"
{  
   if(w>p && w>d)
      return false;
   else if(p<w)
      drugi.push(w);
   else if(d<w)
   {
      ktorystack[ile]=true;
      pierwszy.push(w);  
   }
   else
   {
       int a=w;
       int ilewiekszych=0;
       nizszy=min(p,d);
       while(wiekszy[a]!=0)
       {
          ilewiekszych++;
          if(wiekszy[a]>nizszy)
          break;
          a=wiekszy[a];
       }
       if(ilewiekszych%2==1)
       {
          if(p==nizszy)
          {
             pierwszy.push(w);
             ktorystack[ile]=true;
          }   
          else
             drugi.push(w);
       }
       else
       {
          if(p==nizszy)
             drugi.push(w);
          else
          {
             pierwszy.push(w);
             ktorystack[ile]==true;
          }
       }   
   }
   return true;
}

void mozna()
{
   while(ile<n-1)
   {
      if(!pierwszy.empty()) //pierwszy stack
         p=pierwszy.top();
      else
         p=100001;   

      if(!drugi.empty())  //drugi
         d=drugi.top();
      else
         d=100002;
      
      if(wjazd[ile]!=ktory) //jesli nie moze isc od razu na b
      {
         if(!pierwszy3drugi(wjazd[ile]))
            return;
      }
      else
         ktory++;
         
      while((!pierwszy.empty()&& ktory==pierwszy.top()) || (!drugi.empty() && ktory==drugi.top())) //wywalanie na tor b;
         if(!pierwszy.empty() && pierwszy.top()==ktory)
         {
            pierwszy.pop();
            ktory++;
         }
         else
         {
            drugi.pop();
            ktory++;
         }
      ile++;
   }
}

int main()
{
    wczytaj();
    mozna();
    if(ile == n-1)  //jesli przeszlo do konca
    {
       printf("TAK\n");
       for(int i=0;i<n-1;i++)
          if(ktorystack[i])
             printf("1 ");
          else
             printf("2 ");
       if(ktorystack[n-1])
       printf("1\n");
       else
       printf("2\n");


    }
    else
       printf("NIE\n");
       
    return 0;
}
