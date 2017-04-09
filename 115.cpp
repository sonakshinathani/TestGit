/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Nov 12 21:54:45 IST 2014
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
int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    FOR(i,0,n){
        int a;
        cin >> a;
        mp[a]++;
    }
    map<int,int>::iterator it;
   // int prev;
    for(it=mp.begin();it!=mp.end();it++){
        cout << it->first << endl;
        
    }

return 0;
}

