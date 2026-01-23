#include <stdio.h>
#include<math.h>

int quadratic(int a,int b,int c)
{
    int D;
    D=b*b-4*a*c;
    
    if(D>0){
    printf("実数解は２つあります\n");
    }
    
    else if(D==0){
    printf("実数解は1つあります\n");
    }
    
    else{
    printf("実数解はありません\n");
    }
}
    

int main()
{
    int a,b,c;
    printf("aを入力してください");
    scanf("%d",&a);
    
    printf("bを入力してください");
    scanf("%d",&b);
    
    printf("cを入力してください");
    scanf("%d",&c);
    
    quadratic(a,b,c);
    
    return 0;
}
