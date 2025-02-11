// Your code here...
#include<stdio.h>
int main(){
  
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        printf("Yes");
    }
    else if(n2>n1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

