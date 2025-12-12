#include <stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char password[444];
    unsigned int e;
    
    printf("パスワードを入力してください。>>>");
    fgets(password,sizeof(password),stdin);
    e=strlen(password);
    
    if(e-1<8)printf("8文字以上に変更してください\n");
    
{
    if (password[i]>=97 && password[i]<=122);
    else i++;
}
    
{
    if (password[j]>=65 && password[j]<=90);
    else j++;
}
    printf("%d\n",i);
    printf("%d\n",j);
    if(e==i)printf("小文字が含まれていません\n");
    if(e==j)printf("大文字が含まれていません\n");
    if(e-1>=8 && e!=j)printf("パスワードは強力です\n");
    
    return 0;
}
