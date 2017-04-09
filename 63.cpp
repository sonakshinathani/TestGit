/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 17 09:22:53 IST 2014
*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<stack>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
vector<int> G[100];
int n,m;
void bfs(int v){
    int visited[n];
    CLR(visited);
    queue<int> q;
    q.push(v);
    visited[v]=1;
    while(!q.empty()){
        int val = q.front();
        cout << val << endl;
        q.pop();
        FOR(i,0,G[val].size()){
            if(!visited[G[val][i]]){
                q.push(G[val][i]);
                visited[G[val][i]]=1;
            }
        }
    }
}
int main(){
    cin >> n;
    cin >> m;
    FOR(i,0,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
    }
    FOR(i,0,m){
        cout << i << "---- ";
        FOR(j,0,G[i].size()){
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    bfs(0);
return 0;
}

