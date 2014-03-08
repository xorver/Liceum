//Tomasz Lichoñ 1D

#include<iostream>
using namespace std;

void p(int a)
{
cout << a <<endl;
}


main()
{
int a,b,c,d,e;
cin >> a >> b >> c >> d >> e;

if(a<b && a<c && a<d && a<e)
{
   p(a);
   if(b<=c && b<=d && b<=e)    //b
   {
      p(b);
      if(c<=d && c<=e)
      {
         p(c);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=c && d<=e)
      {
         p(d);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }  
   }       
   else
   if(c<=b && c<=d && c<=e)   //c
   {
      p(c);
      if(b<=d && b<=e)
      {
         p(b);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=b && d<=e)
      {
         p(d);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      {
         p(e);
         if(b<=d)
         {
            p(b);
            p(d);
         }
         else
         {
            p(d);
            p(b);
         }
         
      }
      
   }
   else
   if(d<=b && d<=c && d<=e)   //d
   {
      p(d);
      if(c<=b && c<=e)
      {
         p(c);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      if(b<=c && b<=e)
      {
         p(b);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
         
      }
   }
   else                     //e
   {
      p(e);
      if(c<=d && c<=b)
      {
         p(c);
         if(d<=b)
         {
            p(d);
            p(b);
         }
         else
         {
            p(b);
            p(d);
         }
      }
      else
      if(d<=c && d<=b)
      {
         p(d);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
      }
      else
      {
         p(b);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }
   }
}
else
if(b<=a && b<=c && b<=d && b<=e)
{
   p(b);
   if(a<=c && a<=d && a<=e)    //a
   {
      p(a);
      if(c<=d && c<=e)
      {
         p(c);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=c && d<=e)
      {
         p(d);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }  
   }       
   else
   if(c<=a && c<=d && c<=e)   //c
   {
      p(c);
      if(a<=d && a<=e)
      {
         p(a);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=a && d<=e)
      {
         p(d);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      {
         p(e);
         if(a<=d)
         {
            p(a);
            p(d);
         }
         else
         {
            p(d);
            p(a);
         }
         
      }
      
   }
   else
   if(d<=a && d<=c && d<=e)   //d
   {
      p(d);
      if(c<=a && c<=e)
      {
         p(c);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      if(a<=c && a<=e)     
      {
         p(a);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
         
      }
   }
   else                     //e
   {
      p(e);
      if(c<=d && c<=a)
      {
         p(c);
         if(d<=a)
         {
            p(d);
            p(a);
         }
         else
         {
            p(a);
            p(d);
         }
      }
      else
      if(d<=c && d<=a)
      {
         p(d);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
      }
      else
      {
         p(a);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }
   }
}
else
if(c<=b && a<=a && c<=d && c<=e)
{
   p(c);
   if(b<=a && b<=d && b<=e)    //b
   {
      p(b);
      if(a<=d && a<=e)
      {
         p(a);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=a && d<=e)
      {
         p(d);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      {
         p(e);
         if(a<=d)
         {
            p(a);
            p(d);
         }
         else
         {
            p(d);
            p(a);
         }
         
      }  
   }       
   else
   if(a<=b && a<=d && a<=e)   //a
   {
      p(a);
      if(b<=d && b<=e)
      {
         p(b);
         if(d<=e)
         {
            p(d);
            p(e);
         }
         else
         {
            p(e);
            p(d);
         }
      }
      else
      if(d<=b && d<=e)
      {
         p(d);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      {
         p(e);
         if(b<=d)
         {
            p(b);
            p(d);
         }
         else
         {
            p(d);
            p(b);
         }
         
      }
      
   }
   else
   if(d<=b && d<=a && d<=e)   //d
   {
      p(d);
      if(a<=b && c<=e)
      {
         p(a);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      if(b<=a && b<=e)
      {
         p(b);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      {
         p(e);
         if(a<=b)
         {
            p(a);
            p(b);
         }
         else
         {
            p(b);
            p(a);
         }
         
      }
   }
   else                     //e
   {
      p(e);
      if(a<=d && a<=b)
      {
         p(a);
         if(d<=b)
         {
            p(d);
            p(b);
         }
         else
         {
            p(b);
            p(d);
         }
      }
      else
      if(d<=a && d<=b)
      {
         p(d);
         if(a<=b)
         {
            p(a);
            p(b);
         }
         else
         {
            p(b);
            p(a);
         }
      }
      else
      {
         p(b);
         if(a<=d)
         {
            p(a);
            p(d);
         }
         else
         {
            p(d);
            p(a);
         }
         
      }
   }
}
else
if(d<=b && d<=c && d<=a && d<=e)
{
   p(d);
   if(b<=c && b<=a && b<=e)    //b
   {
      p(b);
      if(c<=a && c<=e)
      {
         p(c);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      if(a<=c && a<=e)
      {
         p(a);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
         
      }  
   }       
   else
   if(c<=b && c<=a && c<=e)   //c
   {
      p(c);
      if(b<=a && b<=e)
      {
         p(b);
         if(a<=e)
         {
            p(a);
            p(e);
         }
         else
         {
            p(e);
            p(a);
         }
      }
      else
      if(a<=b && d<=e)
      {
         p(a);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      {
         p(e);
         if(b<=a)
         {
            p(b);
            p(a);
         }
         else
         {
            p(a);
            p(b);
         }
         
      }
      
   }
   else
   if(a<=b && a<=c && a<=e)   //a
   {
      p(a);
      if(c<=b && c<=e)
      {
         p(c);
         if(b<=e)
         {
            p(b);
            p(e);
         }
         else
         {
            p(e);
            p(b);
         }
      }
      else
      if(b<=c && b<=e)
      {
         p(b);
         if(c<=e)
         {
            p(c);
            p(e);
         }
         else
         {
            p(e);
            p(c);
         }
      }
      else
      {
         p(e);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
         
      }
   }
   else                     //e
   {
      p(e);
      if(c<=a && c<=b)
      {
         p(c);
         if(a<=b)
         {
            p(a);
            p(b);
         }
         else
         {
            p(b);
            p(a);
         }
      }
      else
      if(a<=c && a<=b)
      {
         p(a);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
      }
      else
      {
         p(b);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
         
      }
   }
}
else
if(e<=b && e<=c && e<=d && e<=a)
{
   p(e);
   if(b<=c && b<=d && b<=a)    //b
   {
      p(b);
      if(c<=d && c<=a)
      {
         p(c);
         if(d<=e)
         {
            p(d);
            p(a);
         }
         else
         {
            p(a);
            p(d);
         }
      }
      else
      if(d<=c && d<=a)
      {
         p(d);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
      }
      else
      {
         p(a);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }  
   }       
   else
   if(c<=b && c<=d && c<=a)   //c
   {
      p(c);
      if(b<=d && b<=a)
      {
         p(b);
         if(d<=a)
         {
            p(d);
            p(a);
         }
         else
         {
            p(a);
            p(d);
         }
      }
      else
      if(d<=b && d<=a)
      {
         p(d);
         if(b<=a)
         {
            p(b);
            p(a);
         }
         else
         {
            p(a);
            p(b);
         }
      }
      else
      {
         p(a);
         if(b<=d)
         {
            p(b);
            p(d);
         }
         else
         {
            p(d);
            p(b);
         }
         
      }
      
   }
   else
   if(d<=b && d<=c && d<=a)   //d
   {
      p(d);
      if(c<=b && c<=a)
      {
         p(c);
         if(b<=a)
         {
            p(b);
            p(a);
         }
         else
         {
            p(a);
            p(b);
         }
      }
      else
      if(b<=c && b<=a)
      {
         p(b);
         if(c<=a)
         {
            p(c);
            p(a);
         }
         else
         {
            p(a);
            p(c);
         }
      }
      else
      {
         p(a);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
         
      }
   }
   else                     //a
   {
      p(a);
      if(c<=d && c<=b)
      {
         p(c);
         if(d<=b)
         {
            p(d);
            p(b);
         }
         else
         {
            p(b);
            p(d);
         }
      }
      else
      if(d<=c && d<=b)
      {
         p(d);
         if(c<=b)
         {
            p(c);
            p(b);
         }
         else
         {
            p(b);
            p(c);
         }
      }
      else
      {
         p(b);
         if(c<=d)
         {
            p(c);
            p(d);
         }
         else
         {
            p(d);
            p(c);
         }
         
      }
   }
}



system("pause");
return 0;     
}
