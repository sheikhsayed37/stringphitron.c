#include <stdio.h>
int main()
{
    char st[122],sd[1221];
    
    scanf("%s %s",&st, &sd);

    int value=strcmp(st,sd);
    

    if(value>0)
    {
        printf("st is bigger");
    }
    
     else if(value<0)
     {
        printf("st is smaller");
     }
     else if(value==0)

     {
        printf("equal");
     }
}