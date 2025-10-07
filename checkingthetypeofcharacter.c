#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is a Capital Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Small Letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    else {
        printf("'%c' is a Special Symbol.\n", ch);
    }

    return 0;
}