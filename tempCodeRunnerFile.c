#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int countTriangles(int* sticks, int n) {
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (sticks[i] > sticks[j]) {
                // Swap sticks[i] and sticks[j]
                int temp = sticks[i];
                sticks[i] = sticks[j];
                sticks[j] = temp;
            }
        }
    }

 
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (sticks[i] + sticks[j] > sticks[k]) {
                    count++;
                } else {
                    break;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int* sticks = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i) {
            scanf("%d", &sticks[i]);
            sticks[i] = pow(2,sticks[i]);
        }

        int result = countTriangles(sticks, n);
        printf("%d\n", result);

        free(sticks);
    }

    return 0;
}
