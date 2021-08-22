#include <iostream>
#include <cmath>
using namespace std;

long long int ridicare_la_putere(int n,int p)
{
    long long int r=1;
    while(p!=0)
    {
        if(p%2==1) r=r*n;
        n=n*n;
        p=p/2;
    }
    return r;
}

int main()
{
int n;
int p;
cin>>n>>p;
cout<<ridicare_la_putere(n,p);
}