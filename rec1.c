#include <stdio.h>
#include <limits.h>

int main() {
    int q;
    scanf("%d", &q);
    int Q = q;
    long long int no = 0;

    while (q > 0) {
        no = no + 5;
        for (int i = Q; i >= 1; --i) {
            long long int m = 1;
            for (int j = 0; j < i; ++j) {
                m *= 5;
            }
            if (no % m == 0) {
                q = q - i;
                break;
            }
        }
    }

    if (q != 0) {
        printf("No solution");
        return 0;
    }

    printf("%lli", no);

    return 0;
}
