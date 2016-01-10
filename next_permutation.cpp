#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    while(t--)
    {
        string str,temp;
        cin>>str;
        temp=next_permutation(str.begin(),str.end());
        cout<<str<<endl;
        if(temp == "0"){cout<<"no answer"<<endl;}
        else cout<<temp<<endl;

    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
