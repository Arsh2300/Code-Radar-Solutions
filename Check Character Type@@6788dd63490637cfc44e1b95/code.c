#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
//     printf("%s", welcome());
//     return 0;
// }
char ch;
printf("",ch);
scanf("%c",&ch);
if(ch=='A' || ch=='E'||ch=='I' || ch=='O'||ch=='U' || ch=='a'||ch=='e' || ch=='i'||ch=='o' || ch=='u'){
    printf("Vowel");
}
else if(ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'){
    printf("Consonant");

}
else if (ch>=0 && ch<=9){
    printf("Digit");
}
else{
    printf("Special Character");
}
return 0;
}
