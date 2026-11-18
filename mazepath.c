 #include<stdio.h>
 
 int maze(int cr,int cc,int er,int ec){
    int rightway=0;
    int downway=0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){
        rightway+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downway+=maze(cr+1,cc,er,ec);
    }
    if(cr<er&& cc<ec){
        rightway=maze(cr,cc+1,er,ec);
        downway=maze(cr+1,cc,er,ec);
    }
    int totalway=rightway+downway;
    return totalway;

 }
 void main(){
    int n,m;
    printf("Enter Number of rows:");
    scanf("%d",&n);
    printf("Enter Number of columns:");
    scanf("%d",&m);
    printf("%d",maze(1,1,n,m));
    
 }