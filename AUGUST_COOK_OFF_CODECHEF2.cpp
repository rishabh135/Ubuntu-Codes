#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <functional>
#include <bits/stdc++.h>
#define LL unsigned long long int
#include <cmath>
#include <string>
using namespace std;


int main ()
{ int t;
	string str1,str2;
	cin>>t;
	while(t--)
		{	bool flag=true;
			cin>>str1>>str2;
			int l=str1.length();
			for(int i=0;i<l;i++)
				{
					if( str1[i]=='?' || str2[i] == '?')
						continue;
					else if (str1[i] == str2[i])
					{
						continue;
					}
					else 
						{ 
							cout<<"No"<<endl;
							flag=false;
							break;
						}

				}
				if(flag == true)
					cout<<"Yes"<<endl;


		}


	return 0;
}