#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int hash1(string s,int len){
	
	int result = 0;
	for(int i=0;i<len ;++i)
	    {
	        if( s[i] == 'A')
	            result++;
	    }
		cout<<s<<"   "<<result<<endl;

	if (len > 1)
	    {
		    string s1,s2;
		    s1 = s.substr(0 , len/2);
		    s2 = s.substr( (len/2) , len-1);
		    cout<<s1<<"  "<<s2<<"   "<<endl;
		    result = result + max(hash1(s1, len/2), hash1(s2 , len -len/2));
        }

	return result;
}

int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
                string s;
                cin>>s;
                cout<<hash1(s ,s.length())<<endl;
			
			}



	return 0;
	    
	    
	}