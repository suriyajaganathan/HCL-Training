#include <stdio.h>
#include <stdbool.h>

#define N 3

bool rows(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        int freq[10] = {0};
        for (int j = 0; j < N; j++) {
            int val = arr[i][j];
            if (val < 1 || val > 9 || freq[val] == 1)
                return false;
            freq[val] = 1;
        }
    }
    return true;
}

bool cols(int arr[N][N]) {
    for (int j = 0; j < N; j++) {
        int freq[10] = {0};
        for (int i = 0; i < N; i++) {
            int val = arr[i][j];
            if (val < 1 || val > 9 || freq[val] == 1)
                return false;
            freq[val] = 1;
        }
    }
    return true;
}

int main() {
    int grid[N][N];
    printf("Enter:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &grid[i][j]);

    if (rows(grid) && cols(grid))
        printf("All rows and columns have unique elements\n");
    else
        printf("Invalid.\n");

    return 0;
}

