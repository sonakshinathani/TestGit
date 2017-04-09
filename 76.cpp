/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 19:35:24 IST 2014
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
void divideStr(string a,int n){
    if(a.size()%n!=0) return;
    int div = a.size()/n;
    FOR(i,0,a.size()){
        if(i%div==0) cout << endl;
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    string a;
    cin >> a;
    cin >> n;
    divideStr(a,n);
return 0;
}

