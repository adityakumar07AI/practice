#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int a1=fibo(n-1);
    int a2=fibo(n-2);
    int a=a1+a2;
    return a;
}


int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    printf("%d",fibo(num));
}