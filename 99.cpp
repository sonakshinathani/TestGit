/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 16:36:03 IST 2014
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
int dp[100];
int MISS(int a[],int n){
    int max_val=0;
    FOR(i,0,n) dp[i]=a[i];
    FOR(i,0,n){
        FOR(j,0,i){
            if(a[i]>a[j] && (dp[j]+a[i])>dp[i]){
                dp[i] = (dp[j]+a[i]);
                if(max_val < dp[i]) max_val = dp[i];
            }
        }
    }
    return max_val;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    cout << MISS(a,n) << endl;
return 0;
}

