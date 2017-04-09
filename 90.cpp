/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 16:32:02 IST 2014
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
int a[100][100];
int dp[100][100];
int n,m;
int mini(int a1,int b,int c){
    return min(a1,min(b,c));
}
int minCost(int i,int j,int x,int y){
    int sum=0;
    FOR(i,0,n){
        sum+=a[i][0];
        dp[i][0] = sum;
    }
    FOR(j,0,m) dp[0][j] = dp[0][j-1]+a[0][j];
    FOR(i,1,n){
        FOR(j,1,m){
            dp[i][j] = mini(dp[i-1][j],dp[i-1][j-1],dp[i][j-1])+a[i][j];
        }
    }
    FOR(i,0,n){
        FOR(j,0,m){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[x][y];
}
int main(){
    cin >> n >> m;
    FOR(i,0,n){
        FOR(j,0,m){
            cin >> a[i][j];
        }
    }
    int x,y;
    cin >> x >> y;
    cout << minCost(0,0,x,y) << endl;
return 0;
}

