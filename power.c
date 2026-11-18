#include<stdio.h>

int power(int a,int b){
    if(b==0){
        return 1;  //for stopping the code
    }
    int result=power(a,b-1)*a;
    return result;
}

int main()
{
    int a,b;
    printf("Enter base");
    scanf("%d",&a);
    printf("Enter exponent");
    scanf("%d",&b);
    printf("%d",power(a,b));

}