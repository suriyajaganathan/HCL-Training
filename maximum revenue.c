#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n = 4;
    int bandwidth[] = {2, 3, 4, 5};
    int revenue[]   = {3, 4, 5, 6};
    int B = 5;

    int dp[n + 1][B + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= B; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (bandwidth[i - 1] <= w)
                dp[i][w] = max(
                    revenue[i - 1] + dp[i - 1][w - bandwidth[i - 1]],
                    dp[i - 1][w]
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    printf("%d\n", dp[n][B]);
    return 0;
}
