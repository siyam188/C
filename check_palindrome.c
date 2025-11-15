#include <stdio.h>
#include <string.h>
int is_palindrome(char s[], int len) {
    int f = 1;
    int i = 0;
    int j = len - 1;
    while (i< j) {
        if (s[i] != s[j]) {
            f = 0;
            break;
        }
        i++;
        j--;
    }
    return f;
}
int main() {
    char s[1005];
    scanf("%s", s);

    int len = strlen(s);

    int res= is_palindrome(s, len); 

    if (res == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
