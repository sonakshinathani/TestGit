/*
Sonakshi Nathani
IIIT-HYD
information: I discovered that ~(x-1) == (~x+1) == (-x) 
#tags: 
date: Thu Mar 27 02:12:25 IST 2014
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sii(a,b) scanf("%d %d",&a,&b)
#define si(a) scanf("%d",&a)
#define pii(a,b) printf("%d %d\n",a,b)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
int calcSetBits(unsigned int n){
    int count=0;
    while(n){
        cout << (n&1);
        if(n&1)
            count++;
        n>>=1;
    }
    cout << endl;
    return count;
}
int main(){
    unsigned int n;
    cin >> n;
    int value = (n&(-n)); // Or n&(~(n-1))
    cout << calcSetBits(value) << endl;
return 0;
}

