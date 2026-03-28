#include <stdio.h>
#define MAX 5
int arr [MAX];

int top=-1;

int push(int n){
    if(top==MAX-1){
        printf("overflow");
    }else{
        arr[++top]=n;
    }
}
int isempty(){
    if(top==-1){
        printf("empty\n");
    }else{
        printf("not empty\n");
    }
}
int isfull(){
    if(top==MAX-1){
        printf("full\n");
    }else{
        printf("not full\n");
    }
}
int pop(){
    if(top==-1){
        printf("underflow\n");
    }else{
        int b=arr[top--];
        printf("removed:%d\n",b);
        return b;
    }
}

int peek(){
    if(top==-1){
        printf("empty");
    }else{
        printf("peek:%d\n",arr[top]);
    }
}
int main() {
    int b;
    push(2);
    push(3);
    push(5);
    push(8);
    push(1);
    pop();
    push(9);
    pop();
    peek();
    isempty();
    isfull();
    printf("Stack elements\n");
    for(int i=0;i<=top;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}