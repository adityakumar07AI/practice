#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}


int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    printf("%d",stair(num));
}