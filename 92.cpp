/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Sep 23 18:56:01 IST 2014
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
int pennies[100];
int n,s;
int totPenn(int pennies[]){
    int total[s+1];
    CLR(total);
    total[0]=1;
    FOR(i,0,n){
        FOR(j,pennies[i],s+1){
            total[j]+=total[j-pennies[i]];
        }
    }
    return total[s];
}
int main(){
    cin >> n;
    FOR(i,0,n){
        cin >> pennies[i];
    }
    cin >> s;
    cout << totPenn(pennies) << endl;
return 0;
}

