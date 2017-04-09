/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 23:25:36 IST 2014
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
int eggDrop(int n,int k){
    int dp[n+1][k+1];
    FOR(i,1,n+1){
        dp[i][0]=0;
        dp[i][1]=1;
    }
    FOR(i,1,k+1) dp[1][i]=i;
    FOR(i,2,n+1){
        FOR(j,2,k+1){
        dp[i][j]=INT_MAX;
        FOR(x,1,j+1)
            dp[i][j] = min(dp[i][j],1+max(dp[i-1][j-1],dp[i][j-x]));
        }
    }
    return dp[n][k];
}
int main(){
    int n,k;
    cin >> n  >> k;
    cout << eggDrop(n,k) << endl;
return 0;
}

