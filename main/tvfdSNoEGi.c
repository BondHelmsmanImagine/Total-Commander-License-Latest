#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int isPalindrome(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
#define STR_BUF_SIZE 100
    char str[STR_BUF_SIZE];
    printf("Enter a string: ");
    fgets(str, STR_BUF_SIZE, stdin);
    str[strcspn(str, "\n")] = 0;
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
