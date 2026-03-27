#include <stdio.h>

int main() {
    int arr[]={100,200,150,300};
    int n=4;
    float sum=arr[0];
    float avg=0;
    int count=0;
    for(int i=1;i<=n;i++){
        avg=sum/i;
        if(arr[i]>avg){
            count++;
        }
        sum=sum+arr[i];
    }
    printf("%d",count);
    return 0;
}

