#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

int n,a,b;

struct wezel
{
    int ojciec;
    vector<int> syn;
    long long pod;
    long long all;
    int synowie_pod;
};

wezel drzewo[1000001];

void wczytaj()
{
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
	scanf("%d%d",&a,&b);
	drzewo[a].syn.push_back(b);
	drzewo[b].syn.push_back(a);
    }
}

void wyznacz_ojca(int akt,int ojciec)
{
drzewo[akt].ojciec = ojciec;
for(int i=0;i<drzewo[akt].syn.size();i++)
    if(drzewo[akt].syn[i] != ojciec)
	wyznacz_ojca(drzewo[akt].syn[i],akt);
    else
    {
	drzewo[akt].syn.erase(drzewo[akt].syn.begin()+i);
	i--;
    }
}

wezel licz_z_dolu(int akt)
{
    drzewo[akt].pod=0;
    drzewo[akt].synowie_pod=1;
    for(int i=0;i<drzewo[akt].syn.size();i++)
    {
	wezel tmp= licz_z_dolu(drzewo[akt].syn[i]);
	drzewo[akt].pod += tmp.pod;
	drzewo[akt].synowie_pod+=tmp.synowie_pod;
    }
    drzewo[akt].pod+=drzewo[akt].synowie_pod-1;
    return drzewo[akt];
}

void licz_gora(int akt)
{
    drzewo[akt].all=(long long)drzewo[drzewo[akt].ojciec].all + n - 2*drzewo[akt].synowie_pod;
    for(int i=0;i<drzewo[akt].syn.size();i++)
	licz_gora(drzewo[akt].syn[i]);
}

int main()
{
    wczytaj();
    wyznacz_ojca(1,0);
    licz_z_dolu(1);
    drzewo[1].all=drzewo[1].pod;
    for(int i=0;i<drzewo[1].syn.size();i++)
	licz_gora(drzewo[1].syn[i]);
    int best=1;
    for(int i=2;i<=n;i++)
	if(drzewo[best].all<drzewo[i].all)
	    best=i;
    printf("%d\n",best);

    return 0;
}
