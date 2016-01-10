#include<bits/stdc++.h>
using namespace std;
long long DP[20][200][1500];
int digits[20];
long long solver(int pos,int digitSum,int squareSum,bool check)
{
    if(pos==-1)
        return __gcd(digitSum,squareSum)==1;
    if(!check && DP[pos][digitSum][squareSum]!= -1)
        return DP[pos][digitSum][squareSum];
    long long ans = 0;
    int endingDigit;
    if(check){
        endingDigit=digits[pos];
    }
    else{
        endingDigit=9;
    }
    for(int currentDigit=0;currentDigit<=endingDigit;currentDigit++)
    {
        ans+=solver(pos-1,digitSum + currentDigit,squareSum + currentDigit*currentDigit,check && currentDigit==endingDigit);
    }
    if(!check)
        DP[pos][digitSum][squareSum]=ans;
    cout<<ans<<endl;
    return ans;
}
long long solve(long long num)
{
    if(num==0)
    	return 0;
	int len=0;
    while(num)
    {
        digits[len++]=num%10;
        num/=10;
    }
    long long ans=solver(len-1,0,0,1);
    return ans;
}
int main()
{
	//freopen("40.txt","r",stdin);
	//freopen("40o.txt","w",stdout);
    int t;
	memset(DP,-1,sizeof(DP));
    cin>>t;
    while(t--)
    {
        long long L,R;
        cin>>L>>R;
        cout<<solve(R)-solve(L-1)<<"\n";
    }
}