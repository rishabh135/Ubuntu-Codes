#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<queue>
using namespace std;

class graph
    {
    int v;
    std::list <int> *adj;
    public:
        graph (int v);
        void addedge(int v,int w);
        void bfs(int s);

    };

graph::graph(int v)
    {
    this->v=v;
    adj =new list<int> [v];
};

void graph::addedge(int v,int w)
    {
    adj[v].push_back(w);
}


void graph::bfs(int s)
    {
    bool *visit=new bool [v];
    int cont=0;
    list<int> list1;
    visit[s]=true;
    list1.push_back(s);
    list<int>::iterator i;
    while(!list1.empty())
        {
        s=list1.front();

        cout<<s*cont<<" ";
        cont+=6;
        list1.pop_front();
        for(i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(visit[*i] == false)
                    {
                    visit[*i]=true;
                    list1.push_back(*i);
                    }
            }
        }
}



int main() {
    int t,n,m,bf;
    cin>>t;
    while(t--)
        {
        cin>>n>>m;
        graph gr(n);
        int tmp1,tmp2;
        for(int i=0;i<m;i++)
            {
                cin>>tmp1>>tmp2;
                gr.addedge(tmp1,tmp2);
                gr.addedge(tmp2,tmp1);

            }

        cin>>bf;
        gr.bfs(bf);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
