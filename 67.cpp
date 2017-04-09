/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 17 15:35:23 IST 2014
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
#include<stack>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
vector<pair<int,int> > G[100];
int n,m;
int visited[100];
int dist[100];
void topSort(int v,stack<int> *s){
    visited[v]=true;
    FOR(i,0,G[v].size()){
        if(!visited[G[v][i].first]) topSort(G[v][i].first,s);
    }
    (*s).push(v);
}
void longestPath(int v){
    FOR(i,0,G[v].size()){
        cout << G[v][i].first << " " << G[v][i].second << endl;
    }
    CLR(visited);
    stack<int> s;
    FOR(i,0,n){
        dist[i]=INT_MIN;
        if(!visited[i]) topSort(i,&s);
    }
    dist[v]=0;
    while(!s.empty()){
        int val = s.top();
        s.pop();
        FOR(i,0,G[val].size()){
            if(dist[val]!=INT_MIN){
            if(dist[G[val][i].first] < (dist[val] + G[val][i].second)){
            dist[G[val][i].first] = (dist[val] + G[val][i].second);
            }
            }
        }
    }
    FOR(i,0,n) cout << dist[i] << endl;
}
int main(){
    cin >> n >> m;
    FOR(i,0,m){
        int a,b,w;
        cin >> a >> b >> w;
        G[a].push_back(make_pair(b,w));
    }
    longestPath(0);
return 0;
}

