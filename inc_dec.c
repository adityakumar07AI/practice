#include<stdio.h>
void numinc(int x){
    if(x==0) return;
    printf("%d\n",x);
    numinc(x-1);
    printf("%d\n",x);
}

void main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    numinc(num);
}