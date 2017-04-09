/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Sep 18 11:06:59 IST 2014
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
int G[100][100];
int N,E;
int parent[100];
int outset[100];
int key[100];
int minkey(){
    int minval = INT_MAX,minidx;
    FOR(i,0,N){
        if(outset[i]==0 && key[i]<minval){
            minval = key[i];
            minidx = i;
        }
    }
    return minidx;
}
void printmst(){
    FOR(i,1,N){
        cout << parent[i] << " " << i << " " << G[i][parent[i]] << endl;;
    }
}
void prim(){
    CLR(outset);
    FOR(i,0,N) key[i]=INT_MAX;
    key[0]=0;
    parent[0]=-1;
    FOR(i,0,N-1){
        int u = minkey();
        cout << u << endl;
        outset[u] = 1;
        FOR(v,0,N){
            if(G[u][v] && outset[v]==0 && G[u][v] < key[v]){
                parent[v]=u;
                key[v] = G[u][v];
            }
        }
    }
    printmst();
}
int main(){
    cin >> N >> E;
    FOR(i,0,N){
        FOR(j,0,N){
            cin >> G[i][j];
        }
    }
    prim();
return 0;
}

