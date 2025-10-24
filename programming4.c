#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("double maximum:%g\n",DBL_MAX);
    printf("double minimum:%g\n",DBL_MIN);
    printf("double precision:%d\n",DBL_DIG);
    printf("int maximum:%d\n",INT_MAX);
    printf("int minimum:%d\n",INT_MIN);
    printf("long long int maximum:%lli",LLONG_MAX);
    printf("long long int minimum:%lli",LLONG_MIN);
    printf("long double maximuim:%ld",LDBL_MAX);
    printf("long double minimum:%ld",LDBL_MIN);

    return 0;
}
