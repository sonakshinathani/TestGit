/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 16:12:38 IST 2014
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
int dp[100];
int cutrod(int price[],int n){
    if(n<=0) return 0;
    if(dp[n]!=-1) return dp[n];
    dp[n] = INT_MIN;
    FOR(i,0,n){
        dp[n]=max(dp[n],price[i]+cutrod(price,n-i-1));
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
   // FOR(i,0,n) cin >> l[i];
    SET(dp);
    int price[100];
    FOR(i,0,n) cin >> price[i];
    cout << cutrod(price,n) << endl;
    return 0;
}

