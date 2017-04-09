/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 11:03:18 IST 2014
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
int mini(int a,int b,int c){
    return min(a,min(b,c));
}
int editDist(string a,string b){
    int dp[a.size()+1][b.size()+1];
    FOR(i,0,a.size()+1){
        dp[i][0]=i;
    }
    FOR(j,0,b.size()+1){
        dp[0][j]=j;
    }
    FOR(i,1,a.size()+1){
        FOR(j,1,b.size()+1){
            int c;
            if(a[i-1]==b[j-1]) c=0;
            else c=1;
            dp[i][j] = mini(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+c);
        }
    }
    /*
    FOR(i,0,a.size()+1){
        FOR(j,0,b.size()+1){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/
    return dp[a.size()][b.size()];
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << editDist(a,b) << endl;
return 0;
}

