#include <stdio.h>
#include <string.h>

// Function to check if a substring is a palindrome
int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}
// Function to find the longest palindrome substring
void longestPalindromeSubstring(char str[]) {
    int n = strlen(str);
    int maxLength = 1; // To store the length of the longest palindrome substring
    int start = 0; // To store the starting index of the palindrome substring
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    printf("Longest Palindrome Substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char input[100];
    scanf("%[^\n]s", input); 
    longestPalindromeSubstring(input);
    return 0;
}

