//
//  main.cpp
//  aa
//
//  Created by 박정민 on 2021/11/04.
//
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;
vector<int> vec[1001];
bool check[1001];
void dfs(int node)
{
    check[node]=true;
    cout<<node<<" ";
    for(int i=0;i<vec[node].size();i++)
    {
        
        int next= vec[node][i];
        if(check[next]==false)
        {
            dfs(next);
            
        }
    }
}

void bfs(int node)
{
    queue<int> q;
    memset(check,false,sizeof(check));
    check[node]=true;
    
    q.push(node);
    while(!q.empty())
    {
        int n=q.front();
        q.pop();
        cout<<n<<" ";
        
        for(int i=0;i<vec[n].size();i++)
                                     
        {
            int next=vec[n][i];
            if(check[next]==false)
            {
                check[next]=true;
            
                q.push(next);
            }
        }
        
    }
    
    
}

int main(int argc, const char * argv[]) {
   
    
    int n,m,v;
    cin>>n>>m>>v;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
        
        
    }
    for(int i=0;i<=n;i++)
    {
        sort(vec[i].begin(),vec[i].end());
        
        
    }
    dfs(v);
    puts("");
    bfs(v);
    puts("");
    return 0;
}
