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
int visited[100];
bool recur(int v,int res[]){
    visited[v]=1;
    res[v]=true;
    FOR(i,0,G[v].size()){
        if(!visited[G[v][i]] && recur(G[v][i],res)){
            return true;
        }
        else if(res[G[v][i]]==true) return true;
    }
    res[v]=false;
    return false;
}
void dfs(int v){
    CLR(visited);
    bool res[n];
    CLR(res);
    if(recur(v,res)){
        cout << "Yes cycle is there" << endl;
    }
    else 
        cout << "No" << endl;
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
    dfs(0);
return 0;
}

