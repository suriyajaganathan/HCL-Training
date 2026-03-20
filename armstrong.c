#include <stdio.h>
#include <math.h>

void arm(int n){
    int count=0;
    int temp;
    int sum=0,digit;
    temp=n;
    while(temp!=0){
       
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum += pow(digit,count);
        temp=temp/10;
        
    }
    if(sum == n){
        printf("Armstrong num");
    }
}

int main() {
    int n=6;
    arm(n);
}
