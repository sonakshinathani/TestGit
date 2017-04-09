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
    int* array;
};
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
void nextGreaterElement(int inp[],int n){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = n;
    stack->array = (int*)malloc(stack->capacity*sizeof(int));
    push(stack,inp[0]);
    FOR(i,1,n){
        int next = inp[i];
        if(!isEmpty(stack)){
            int element = pop(stack);
            while(element < next){
                cout << "For element " << element << "NGE is" << next << endl;
                if(isEmpty(stack)) break;
                element = pop(stack);
            }
            if(element > next){
                push(stack,next);
            }
        }
        push(stack,next);
    }
    while(!isEmpty(stack)){
        int element = pop(stack);
        int next = -1;
        cout << "For element " << element << "NGE is" << next << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int inp[n];
    FOR(i,0,n) cin >> inp[i];
    nextGreaterElement(inp,n);
    return 0;
}

