/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Nov  2 16:39:48 IST 2014
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
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
vector<vector<int> > G;
vector<vector<int> > Gt;
int visited[100];
int n;
int m;
void rec(int idx){
    visited[idx]=1;
    FOR(i,0,G[idx].size()){
        if(visited[G[idx][i]]==0) rec(G[idx][i]);
    }
}
void rect(int idx){
    visited[idx]=1;
    FOR(i,0,Gt[idx].size()){
        if(visited[Gt[idx][i]]==0) rec(Gt[idx][i]);
    }
}
void transpose(){
    Gt.resize(n+1);
    FOR(i,0,G.size()){
        FOR(j,0,G[i].size()){
            Gt[G[i][j]].push_back(i);
        }
    }
}
bool dfs(){
   CLR(visited);
   rec(1);
   FOR(i,1,n+1){
    if(visited[i]==0) return false;
   }
   transpose();
   CLR(visited);
   rect(1);
   FOR(i,1,n+1){
    if(visited[i]==0) return false;
   }
   return true;
}

bool scc(){
    return dfs();
}
int main(){
    cin >> n;
    cin >> m;
    G.resize(n+1);
    int a,b;
    FOR(i,0,m){
        cin >> a >> b;
        G[a].push_back(b);
    }
        cout << scc() << endl;
return 0;
}

