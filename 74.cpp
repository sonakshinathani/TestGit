/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 18:07:47 IST 2014
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
void printRev(int n){
    if(n==-1){
        cout << endl;
        return;
    }
    cout << a[n] << " ";
    printRev(n-1);
}
int main(){
    cin >> a;
    printRev(a.size()-1);
return 0;
}

