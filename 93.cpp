/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 19:13:55 IST 2014
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
int p[100];
int n;
int minMatMul(){
    int dp[n][n];
    FOR(i,0,n){
        dp[i][i]=1;
    }
    FOR(L,2,n){
        FOR(i,1,(n-L+2)){
            int j = (i+L-1);
            dp[i][j] = INT_MAX;
            FOR(k,i,j){
                dp[i][j] = min(dp[i][k]+dp[k+1][j] + p[i-1]*p[k]*p[j],dp[i][j]);
            }
        }
    }
    return dp[1][n-1];
}
int main(){
    cin >> n;
    FOR(i,0,n){
        cin >> p[i];
    }
    cout << minMatMul() << endl;
return 0;
}

