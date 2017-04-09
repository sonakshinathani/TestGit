/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Tue Oct 21 20:52:51 IST 2014
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
float sqrt(int n){
float x=n;
float y=1;
while(y-x > 0.000001){
   x = (x+y)/2;
   y = n/x;
}
return x;
}
int main(){
    float n;
    cin >> n;
    cout << sqrt(n) << endl;
return 0;
}

