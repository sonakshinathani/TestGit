/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Wed Aug 20 06:07:42 IST 2014
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
#include<stack>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
void calculateSpan(int a[],int n){
    stack<int> s;
    s.push(0);
    int res[100];
    res[0]=1;
    FOR(i,1,n){
        while(!s.empty() && a[s.top()] < a[i]) s.pop();

        res[i] = (s.empty())?(i+1):(i-s.top());
        s.push(i);
    }
    FOR(i,0,n) cout << res[i] << " ";
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int a[100];
    FOR(i,0,n) cin >> a[i];
    calculateSpan(a,n);
return 0;
}

