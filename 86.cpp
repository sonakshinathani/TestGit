/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Mon Sep 22 14:58:32 IST 2014
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
float power(float x,int y){
    if(y==0) return 1;
    float tmp = power(x,y/2);
    if(y%2==0) return tmp*tmp;
    else{
        if(y>0) return x*tmp*tmp;
        else return (tmp*tmp)/x;
    }
}
int main(){
    int x,y;
    cin >> x >> y;
    cout << power(x,y) << endl;
    cout << y%2 << endl;
    cout << y/2 << endl;
return 0;
}

