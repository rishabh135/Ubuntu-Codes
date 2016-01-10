#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <functional>
#include <bits/stdc++.h>
#define LL unsigned long long int
#include <cmath>
using namespace std;


int main ()
{int t;
	LL n;
	cin>>t;
	LL arr[33]={0};
for(int i=1;i<34;i++)
	{	
		arr[i-1]=pow(2,i)-1;
		
	}
	while(t--)
		{int flag=0;
			cin>>n;
			if(n == 1)
				{
					cout<<"2"<<endl;
					continue;
				}
			for(int j=0;j<33;j++)
				{
					if(arr[j] == n){
						cout<<arr[j-1]<<endl;

						flag =1;
					}
				}
			 if(flag == 0)
			 	cout<<"-1"<<endl;

		}


	
return 0;
}