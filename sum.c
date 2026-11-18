#include<stdio.h>
void sum(int x,int s){
    if(x==0){
        printf("%d",s);
        return;
    }
    sum(x-1,s+x);
    return;
}
void main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    sum(num,0);
}