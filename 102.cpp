/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 23:28:01 IST 2014
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
int optGame(int a[],int n){
    int dp[n][n];
    FOR(i,0,n){
        dp[i][i]=a[i];
    }
    FOR(i,0,n-1){
        dp[i][i+1] = max(a[i],a[i+1]);
    }
    FOR(L,2,n){
        FOR(i,1,n-L+1){
            int j = i+L-1;
        
        int x = ((i+2)<=j)?dp[i+2][j]:0;
        int y = ((i+1)<=(j-1))?dp[i+1][j-1]:0;
        int z = (i<=(j-2))?dp[i][j-2]:0;
        dp[i][j] = max(a[i]+min(x,y),a[j]+min(y,z));
        }
    }
    FOR(i,0,n){
        FOR(j,0,n){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[0][n-1];
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    cout << optGame(a,n) << endl;
return 0;
}

