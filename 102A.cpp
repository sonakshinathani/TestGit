/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Nov 13 17:40:23 IST 2014
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
#define SET(a) memset(a,-1,sizeof(a))
int n;
int A[100];
int dp[100][100];
int rec(int i,int j){
    if(i==j) return A[i];
    if(j==(i+1)) return max(A[i],A[j]);
    if(dp[i][j]!=-1) return dp[i][j];
    int &ret = dp[i][j];
    ret = max(A[i]+min(rec(i+2,j),rec(i+1,j-1)),A[j]+min(rec(i,j-2),rec(i+1,j-1)));
    return ret;
}
int main(){
    cin >> n;
    FOR(i,0,n){
        cin >> A[i];
    }
    SET(dp);
    cout << rec(0,n-1) << endl;
return 0;
}

