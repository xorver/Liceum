//Tomasz Lichoñ

#include<cstdio>
using namespace std;



bool czy_jest_ok(int pocz[],int kon[], int n)
{
for(int i=0;i<n;i++)
        if(pocz[i]!=kon[i])
        return true;
return false;   
     
}

int main()
{

int waga[1000010],nr_p[1000010],nr_k[1000010],n,suma_koncowa=0,ilosc_ruchow=0;

scanf("%d",&n);


for(int i=0;i<n;i++)
scanf("%d",&waga[i]);

for(int i=0;i<n;i++)
scanf("%d",&nr_p[i]);

for(int i=0;i<n;i++)
scanf("%d",&nr_k[i]);
      


int naprawde_najmniejsza=waga[0];

for(int i=0;i<n;i++)
        if(naprawde_najmniejsza>=waga[i])
        naprawde_najmniejsza=waga[i];
        

while(czy_jest_ok(nr_p,nr_k,n))
{
int najmniejsza=waga[0], najmniejsza_pocz=-1,najmniejsza_kon;
        
        
        if(nr_p[najmniejsza_kon]==nr_k[najmniejsza_kon] || najmniejsza_pocz==-1)
        for(int i=0;i<n;i++)
        {
                int v,xx;
              
                
                for(int f=0;f<n;f++)
                if(nr_p[f]==i+1)
                {
                v=f;
                break;
                }
                
                for(int h=0;h<n;h++)
                if(nr_k[h]==i+1)
                {
                xx=h;
                break;
                }
                
                if(waga[i] <= najmniejsza && nr_p[v] != nr_k[v])
                {
                           najmniejsza=waga[i];
                           najmniejsza_pocz=v;
                           najmniejsza_kon=xx;

                }
        }


        
        for(int i=0;i<n;i++)
        {
                int do_zamiany;
                if(nr_k[najmniejsza_pocz] == nr_p[i])
                {
                  ilosc_ruchow++;
                  suma_koncowa+=waga[nr_p[najmniejsza_pocz]-1] + waga[nr_k[najmniejsza_pocz]-1];
                  do_zamiany = nr_p[najmniejsza_pocz];
                  nr_p[najmniejsza_pocz]=nr_p[i];
                  nr_p[i]=do_zamiany;
                  najmniejsza_pocz=i;
                  break;
                }
        
                
        } 
        
        
        if(nr_p[najmniejsza_kon]==nr_k[najmniejsza_kon]
        && (ilosc_ruchow*najmniejsza) > (ilosc_ruchow*naprawde_najmniejsza + naprawde_najmniejsza+najmniejsza+naprawde_najmniejsza+najmniejsza))
        suma_koncowa-= ilosc_ruchow*(najmniejsza-naprawde_najmniejsza) - 2*(najmniejsza+naprawde_najmniejsza);
        
        if(nr_p[najmniejsza_kon]==nr_k[najmniejsza_kon])
        ilosc_ruchow=0;
        

}


printf("%d",suma_koncowa);


return 0;     
}


