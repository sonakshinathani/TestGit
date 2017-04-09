/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 16:22:40 IST 2014
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
void longPalin(string a){
    int n = a.size();
    bool palin[n][n];
    FOR(i,0,n){
        palin[i][i]=1;
    }
    int maxlen=0,start;
    FOR(k,2,n+1){
        FOR(i,0,n-k+1){
            int j = (i+k-1);
            if(palin[i+1][j-1] && (a[i]==a[j])){
                palin[i][j]=1;
                if(k>maxlen){
                    maxlen=k;
                    start=i;
                }
            }
            else palin[i][j]=0;
        }
    }
    cout << maxlen << endl;
}
int main(){
    string a;
    cin >> a;
    longPalin(a);
return 0;
}

