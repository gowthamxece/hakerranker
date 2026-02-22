
#include <stdio.h>

int main() {
    int a, b;
    // Reading the two input integers
    scanf("%d", &a);
    scanf("%d", &b);

    // Array to store English representations for 1-9
    char *words[] = {"one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the word from the array (index is i-1)
            printf("%s\n", words[i - 1]);
        }
        else if (i > 9) {
            // Check parity for numbers greater than 9
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
