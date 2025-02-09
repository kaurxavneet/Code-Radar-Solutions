#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c", &c);
    c = tolower(c);
    if (c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("%c", c);
    }
    else if (c >= '0' && c <= '9') {
        printf("%c", c);
    }
    else if ((c >= 'a' && c <= 'z')) {
        printf("%c", c);
    }
    else {
        printf("%c", c);
    }
    return 0;
}
