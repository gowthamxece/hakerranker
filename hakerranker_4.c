#include <stdio.h>

int main() {
    int n;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Array storing words for numbers 1 through 9
    char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    // Check if the number is between 1 and 9
    if (n >= 1 && n <= 9) {
        // We subtract 1 because arrays start at index 0.
        // So if n is 1, it looks at index 0 ("one").
        printf("%s\n", words[n - 1]);
    }
    // Check if the number is greater than 9
    else if (n > 9) {
        printf("Greater than 9\n");
    }
    // Optional: Handle negative numbers or zero
    else {
        printf("Less than 1\n");
    }

    return 0;
}
