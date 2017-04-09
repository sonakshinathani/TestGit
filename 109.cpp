/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sun Nov  2 19:33:55 IST 2014
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
int n,m;
vector<vector<int> > G;
int visited[100];
void rec(int idx){
    visited[idx]=1;
    FOR(i,0,G[idx].size()){
        if(visited[G[idx][i]]==0) rec(G[idx][i]);
    }
}
bool connected(){
    CLR(visited);
    int idx=0;
    FOR(i,1,n+1){
        if(G[i].size()>0){ idx=i;break;}
    }
    rec(idx);
    FOR(i,1,n+1){
        if(visited[i]==0 && G[i].size()>0) return false;
    }
    return true;
}
int oddDegree(){
    int cnt=0;
    FOR(i,1,G.size()){
        if(G[i].size()%2!=0) cnt++;
    }
    return cnt;
}
string euler(){
    if(connected()){
        if(oddDegree()==0) return "cycle";
        else if(oddDegree()==2) return "path";
    }
    return "nothing";
}
int main(){
    cin >> n >> m;
    int a,b;
    G.resize(n+1);
    FOR(i,0,m){
        cin >> a >>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    cout << euler() << endl;
return 0;
}

