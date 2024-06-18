#include <stdio.h>
#include <string.h>


int dx(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }

    return 1; 
}

int main() {
    char str[100];
    gets(str);
    if (dx(str)) {
        printf("%s\n", str);
    }
    }

