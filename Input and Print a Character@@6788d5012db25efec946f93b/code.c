#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char o;
    scanf("%c",&o);
    printf("You entered: %c",o);
    return 0;
}