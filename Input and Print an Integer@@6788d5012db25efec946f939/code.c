#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scabnf("%d",&m);
    printf("You entered: %d",m);
    return 0;
}