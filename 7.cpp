/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Apr  8 02:15:11 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
int main(){
    int n;
    cin >> n;
    int a[n+10];
    FOR(i,0,n){
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    int dp[sum+10];
    dp[0]=0;
    FOR(i,1,sum+1){
        dp[i]=INT_MAX;
    }
    FOR(i,1,sum+1){
        FOR(j,0,n){
            if(a[j]<=i && ((dp[i-a[j]]+1)<dp[i])){
                dp[i] = dp[i-a[j]]+1;
            }
        }
    }
    cout << dp[sum] << endl;
return 0;
}

