/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Thu Mar 27 21:39:19 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
void inBinaryFormat(unsigned int value){
    while(value){
        cout << (value&1);
        value>>=1;
    }
}
int main(){
    unsigned int value = 0xAAAAAAAA;
    //value=32;
    cout << value << endl;
    inBinaryFormat(value);
    cout << endl;
    value = 0x55555555;
    cout << value << endl;
    inBinaryFormat(value);
    cout << endl;
return 0;
}

