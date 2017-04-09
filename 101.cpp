/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Sep 24 19:13:14 IST 2014
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
int minInsertion(string a){
    int dp[a.size()][a.size()];
    FOR(i,0,a.size()){
        dp[i][i]=0;
    }
    FOR(i,0,a.size()-1){
        if(a[i]==a[i+1]){
            dp[i][i+1]=0;
        }
        else dp[i][i+1]=1;
    }
    FOR(L,3,a.size()+1){
        FOR(i,0,a.size()-L+1){
            int j = i+L-1;
            if(a[i]==a[j]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = min(dp[i+1][j],dp[i][j-1])+1;
            }
        }
    }
    FOR(i,0,a.size()){
        FOR(j,0,a.size()){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
        return dp[0][a.size()-1];
}
int main(){
    string a;
    cin >> a;
    cout << minInsertion(a) << endl;
return 0;
}

