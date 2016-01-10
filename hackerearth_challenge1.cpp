#include <iostream>
using namespace std;
#define LL unsigned long long int
int main()
{
	LL n;
	int t=0;
	cin>>t;
	while(t){

		cin>>n;
		if(n <=3){
			cout<<"1 dgdfgfdg"<<"\n";
			continue;
		}
		if(n % 3 == 0){
			cout<<n/3<<"gdgfdg \n";
			continue ;
		}
		else 	{cout<<n<<"00000000\n";

		continue;
		}

		t=t-1;
	}

    return 0;
}
