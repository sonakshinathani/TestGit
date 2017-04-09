/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Fri Nov 14 16:33:30 IST 2014
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
    getline(cin,a);
    cout << a << endl;
    int i=0;
    int cnt=0,pos=0;
    string cmp;
    int len=0;
    while(i<a.size()){
        while(a[i]==' '){
            i++;
            continue;
        }
        if((i==0 || a[i-1]==' ') && a[i]!=' '){
            cnt++;
            int curr=0,flag=0;;
            while(i<a.size() && a[i]!=' '){
                pos++;
                if(cnt==1){
                    cmp.push_back(a[i]);
                    len=pos;
                }
                if(flag==0 && curr<pos){
                    if(cmp[curr]!=a[i]){
                        pos=curr;
                        flag=1;
                    }
                    curr++;
                }
                cout << a[i];
                i++;
            }
            cout << endl;
        }
    }
    cout << cmp << endl;
    cout << cnt << endl;
    cout <<pos-1 << endl;
return 0;
}

