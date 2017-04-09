/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 11:40:05 IST 2014
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
string a;
void permute(string out,int n){
    if(n==a.size()){
        cout << out << endl;
        return;
    }
   // cout << out << endl;
    FOR(i,0,a.size()){
        permute(out+a[i],n+1);
    }
}
int main(){
    cin >> a;
    string out="";
    permute(out,0);    
return 0;
}

