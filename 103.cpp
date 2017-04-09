/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Sep 25 14:55:01 IST 2014
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
#include<set>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
set<string> s;
int doesExists(string a){
    if(a.size()==0) return true;
    FOR(i,1,a.size()+1){
        if((s.find(a.substr(0,i))!=s.end()) && doesExists(a.substr(i,a.size()-i))) return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    FOR(i,0,n){
        string a;
        cin >> a;
        s.insert(a);
    }
    string inp;
    cin >> inp;
    set<string>::iterator it;
    cout << doesExists(inp) << endl;
return 0;
}

