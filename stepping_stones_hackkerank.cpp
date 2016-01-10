#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define LL long long int
#define mod 1000000007

int main() {
    vector<LL> sum (mod);
    for(int i=1;i<mod;i++)
    {
        sum[i]=sum[i-1]+i;
    }

    LL t,n;

    cin>>t;
    while(t)
    {
        cin>>n;
        for(int i=0;;i++)
        {
            if(sum[i] == n)
                {
                    cout<<"Go On Bob "<<i<<endl;
                    break ;
                }
             if(sum[i] > n)
                {
                    cout<<"Better Luck Next Time "<<endl;
                    break ;
                }

        }

        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
