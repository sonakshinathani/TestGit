/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 19:40:25 IST 2014
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
int bCoff(int n,int k){
    int dp[n+1][k+1];
    FOR(i,0,n+1){
        FOR(j,0,min(i,k)+1){
            if(j==0 || j==i) dp[i][j]=1;
            else
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    return dp[n][k];
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << bCoff(n,k) << endl;

return 0;
}

