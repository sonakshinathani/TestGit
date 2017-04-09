/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 18:20:26 IST 2014
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
int used[100];
void permute(string out,int lvl){
    if(lvl==a.size()){
        cout << out << endl;
        return;
    }
    FOR(i,0,a.size()){
        if(used[i]==1)continue;
        used[i]=1;
        permute(out+a[i],lvl+1);
        used[i]=0;
    }
}
int main(){
    string out="";
    cin >> a;
    CLR(used);
    permute(out,0);
return 0;
}

