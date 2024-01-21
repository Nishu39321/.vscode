#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Number of test cases
    int t = 100000;
    printf("%d\n", t);

    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    for (int i = 0; i < t; i++) {
        // Generate random values for x, y, and z
        long long int x = rand() % 1000000000 + 1;
        long long int y = rand() % 1000000000 + 1;
        int z = rand() % 100 + 1;

        printf("%lld %lld %d\n", x, y, z);
    }

    return 0;
}
