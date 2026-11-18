#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int result=n+sum(n-1);
    return result;
}


int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    printf("%d",sum(num));
}