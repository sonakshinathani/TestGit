/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Nov 14 16:06:08 IST 2014
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
int n;
void rec(string out){
    if(atoi(out.c_str())>n) return;
    cout << out <<endl;
    for(char i='0';i<='9';i++){
            out.push_back(i);
            if(atoi(out.c_str())<=n){
                rec(out);
                out.pop_back();
            }
            else break;
            
            
    }

}
int main(){
    cin >> n;
    string out="1";
        for(char i='1';i<='9';i++){
        out=i;
        rec(out);
    }
return 0;
}

