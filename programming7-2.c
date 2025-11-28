#include <stdio.h>
#include <string.h>

int main()
{
    char e[]="MAKIdhkfjkdfhjujfaksdhgcjdjfdgjhdgfhds";
    int i;
    printf("The string is:%s\n",e);
    printf("%lu\n",strlen(e));
    
    for(i=0;i<=strlen(e);i++)
    printf("%d\n",i);
    return 0;
}
