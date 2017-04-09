/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 17:25:22 IST 2014
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
bool partition(int a[],int n){
    int sum=0;
    FOR(i,0,n) sum+=a[i];
    if(sum%2!=0) return 0;
    sum/=2;
    bool dp[sum+1][n+1];
    FOR(i,0,n+1)dp[0][i]=1;
    FOR(i,1,sum+1)dp[i][0]=0;
    FOR(i,1,sum+1){
        FOR(j,1,n+1){
            if(i>a[j-1])
            dp[i][j] = dp[i][j-1] || dp[i-a[j-1]][j-1];
        }
    }
    return dp[sum][n];
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    cout << partition(a,n) << endl;
return 0;
}

