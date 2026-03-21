#include <stdio.h>

int main() {
   
    int arr[]={5,4,3,2};
    int n=4;
    int key=4;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            index = i+1;
            printf("Found at %d",index);
            break;
        }
    }
    if(index == -1){
        printf("Not found");
    }
}
