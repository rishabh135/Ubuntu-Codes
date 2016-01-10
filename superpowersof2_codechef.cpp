#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<string>
#include<queue>
using namespace std;
#define LL long long unsigned int
#define m 1000000007
#include<bitset>
#include <cstdlib>
LL int_2_bin(LL a)
    {
    LL num=0;
    int i=1;
    while(a)
        {
        num=num+i*(a%2);
        i=i*10;
        a/=2;

        }

    return num;}


LL power(int a,int b)
    { if (b == 0)return 1;
    LL tmp=1;
        tmp=power(a,b>>1);
        tmp=tmp*tmp %m;
        if(b & 1) tmp=(tmp*a)%m;
        return tmp;



    }



int main ()
    {
    LL t,n,tmp1,tmp2;
    cin>>t;
    while(t--)
        {
        cin>>n;

       tmp1=int_2_bin(n);

        tmp2=(power(2,tmp1))%m;
        cout<<(tmp2*tmp2)%m<<endl;



        }
    return 0;
    }
