/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Sep 18 10:24:23 IST 2014
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
#define edge pair<int,int>
vector<pair<int, edge> > G,MST;
int parent[1000];
int N,E,total=0;
void reset(){
    FOR(i,0,N) parent[i]=i;
}
int finds(int v){
    if(v==parent[v]) return v;
    return finds(parent[v]);
}
void kruskal(){
    sort(G.begin(),G.end());
    FOR(i,0,E){
        int pu = finds(G[i].second.first);
        int pv = finds(G[i].second.second);
        if(pu!=pv){
            MST.push_back(G[i]);
            total+=G[i].first;
            parent[pu] = parent[pv];
        }
    }
}
void print(){
    FOR(i,0,MST.size()){
        cout << MST[i].second.first << " " << MST[i].second.second << " " << MST[i].first << endl;
    }
cout << "Minimum cost " << total << endl;
}
int main(){
    cin >> N >> E;
    reset();
    FOR(i,0,E){
        int u,v,w;
        cin >> u >> v >> w;
        G.push_back(pair<int, edge>(w,edge(u,v)));
    }
    kruskal();
    print();
return 0;
}

