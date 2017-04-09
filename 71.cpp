/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 11:11:08 IST 2014
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
    string a;
    cin >> a;
    int b[256];
    CLR(b);
    int max_val=0;
    cout << a.size() << endl;
    FOR(i,0,a.size()){
        b[a[i]]++;
        if(b[a[i]]>max_val){
            max_val = b[a[i]];
        }
    }
    cout << max_val << endl;
return 0;
}

