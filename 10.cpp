/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Jun 28 15:58:31 IST 2014
*/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<string.h>
#include<math.h>
#include<limits.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
int n,a[100],val;
bool solve(){
    sort(a,a+n);
    int s=0,e=n-1;
    while(s<=e){
        if(a[s]+a[e]==val)
            return true;
        else if(a[s]+a[e]>val)
            e--;
        else
            s++;
    }
    return false;
}
int main(){
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    cin >> val;
    cout << solve() << endl;
return 0;
}

