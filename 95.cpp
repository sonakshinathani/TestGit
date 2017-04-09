/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 19:54:08 IST 2014
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
int knapsack(int a[],int w[],int n,int W){
    int dp[n+1][W+1];
    FOR(j,0,n+1){
        dp[j][0]=0;
    }
    FOR(i,0,W+1){
        dp[0][i]=0;
    }
    FOR(i,1,n+1){
        FOR(j,1,W+1){
            dp[i][j] = dp[i-1][j];
            if(w[i-1]<=j){
                dp[i][j] = max(a[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
            }
        }
    }
    return dp[n][W];
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int wt[n];
    FOR(i,0,n){
        cin >> a[i];
    }
    FOR(i,0,n){
        cin >> wt[i];
    }
    int W;
    cin >> W;
    cout << knapsack(a,wt,n,W) << endl;
return 0;
}

