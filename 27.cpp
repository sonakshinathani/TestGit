/*
Sonakshi Nathani
IIIT-HYD
information: 
#tags: 
date: Mon Aug 18 19:39:15 IST 2014
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
struct Stack{
    int top;
    unsigned int capacity;
    char* array;
};
bool isOperand(char x){
    return ((x>='a' && x<='z') || (x>='A' && x<='Z'));
}
void push(Stack* stack,char x){
    stack->array[++(stack->top)] = x;
}
bool isEmpty(Stack* stack){
    return stack->top == -1;
}
int prec(char x){
    switch(x){
        case '*':
        case '/':
            return 2;

        case '+':
        case '-':
            return 1;

        case '^':
            return 3;
    }
    return -1;
}
char peek(Stack* stack){
    return stack->array[stack->top];
}
char pop(Stack* stack){
    if(!isEmpty(stack)) return stack->array[stack->top--];
    else return -1;
}
string reverseString(string inp){
    int n = inp.size();
    string res;
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    stack->capacity = n;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    FOR(i,0,n){
        push(stack,inp[i]);
    }
    while(!isEmpty(stack)){
        res.push_back(pop(stack));
    }
    
    return res;
}
int main(){
    string inp;
    cin >> inp;
    string res = reverseString(inp);
    cout << res << endl;
return 0;
}

