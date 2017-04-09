/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Sep 19 15:31:35 IST 2014
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
void removedup(char a[]){
    int res,curr;
    res=curr=1;
    int i=1;
    while(a[i]!='\0'){
        if(a[i]!=a[i-1]){
            a[res]=a[i];
            res++;
        }
        i++;
    }
    a[res]='\0';
    printf("%s",a);
}
int main(){
    char a[100];
    scanf("%s",a);
    removedup(a);
return 0;
}

