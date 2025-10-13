#include<stdio.h>
#include <string.h>
int main()
{
    char st[12],sd[11];
    scanf("%s %s",&st ,&sd);
    strcpy(st,sd);
    printf("%s %s",st,sd);


}