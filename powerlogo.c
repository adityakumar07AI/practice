#include<stdio.h>
int power(int a,int b){

    if(b==0) return 1;
    if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }
    if(b%2!=0){
        return power(a,b/2)*power(a,b/2)*a;
    }
}
void main(){
    int b,e;
    printf("Enter base");
    scanf("%d",&b);
    printf("Enter exponent");
    scanf("%d",&e);
    printf("%d",power(b,e));
}