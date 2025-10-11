#include <stdio.h>
#include <string.h>
int main()
{
   // int st[121]; 
   // gets(st);
   // int length = strlen(st);
   // printf("%d",length);

    int st[121];         // more effective the upper part
    scanf("%s",&st);
    int length = strlen(st);
    printf("%d",length);      // or printf("%d",strlen(st));


}