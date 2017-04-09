/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Sat Sep 20 22:50:01 IST 2014
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
bool doesMatch(string a,string b){
    if(a.empty() && b.empty()) return true;
    else if(a[0]=='*' && b.empty() && a.size()>1){
        return false;
    }
    else if(a[0]=='?' || a[0]==b[0]){
        return doesMatch(a.substr(1),b.substr(1));
    }
    else if(a[0]=='*'){
        return doesMatch(a.substr(1),b) || doesMatch(a,b.substr(1));
    }
    return false;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << doesMatch(a,b) << endl;
return 0;
}

