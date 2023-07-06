#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long count0, count1, temp;

    // Read the length of the sequences, n
    scanf("%d", &n);

    count0 = 1; // Initial count of sequences ending with 0
    count1 = 1; // Initial count of sequences ending with 1

    // Compute the counts of sequences for each length up to n
    for (int i = 2; i <= n; i++) {
        temp = count0; // Store previous count of sequences ending with 0
        count0 = (count0 + count1) % 12345; // Calculate new count of sequences ending with 0
        count1 = temp; // Update count of sequences ending with 1
    }

    // Print the count of sequences modulo 12345
    printf("%lld\n", count0);

    return 0;
}
