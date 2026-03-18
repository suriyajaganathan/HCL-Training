#include <stdio.h>
int main() {
    int arr[] = {2,0,-2,4,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    count++;
                }
            }
        }
    }
    printf("zero sum:%d\n", count);
    return 0;
}
