#include <stdio.h>

int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}

void main(){
    int num;
    printf("Enter nth term");
    scanf("%d",&num);
    printf("%d",stair(num));
}