/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 15:15:03 IST 2014
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
void minPalPartition(string a){
    int n = a.size();
    bool palin[n][n];
    int c[n][n];
    FOR(i,0,n){
        c[i][i]=0;
        palin[n][n]=1;
    }
    FOR(l,2,n+1){
        FOR(i,0,n-l+1){
            int j= i+l-1;
            if(l==2) palin[i][j] = (a[i]==a[j]);
            else palin[i][j] = (a[i]==a[j])&&c[i+1][j-1];
            if(palin[i][j]==1) c[i][j]=0;
            else{
                c[i][j] = INT_MAX;
                FOR(k,i,j){
                    c[i][j] = min(c[i][j],c[i][k]+c[k+1][j]+1);
                }
            }
        }
    }
    cout << c[0][n-1] << endl;
}
int main(){
    string a;
    cin >> a;
    minPalPartition(a);
return 0;
}

