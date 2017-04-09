/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Nov 20 20:21:30 IST 2014
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
int A[100],B[100];
map<int,int> mp;
bool func(int a,int b){
    if(mp[a]>0 && mp[b]>0) return mp[a]<mp[b];
    else if(mp[a]>0) return true;
    else if(mp[b]>0) return false;
    return a<b;
}
int main(){
    int n,m;
    cin >> n >> m;
    FOR(i,0,n) cin >> A[i];
    FOR(i,0,m){ 
    cin >> B[i];
    mp[B[i]]=i+1;
    }
    sort(A,A+n,func);
    FOR(i,0,n) cout << A[i] << " ";
    cout << endl;
return 0;
}

