#include <stdio.h>
#include <ctype.h> 

int main() {
    char s[100005];
    scanf("%s", s);  
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ',') {
            s[i] = ' ';  
        } 
        else if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = toupper(s[i]); 
        } 
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = tolower(s[i]); 
        }
    }

    printf("%s\n", s);
    return 0;
}
