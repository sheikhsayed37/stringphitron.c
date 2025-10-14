#include <stdio.h>
int main()
{
    char st[122],sd[1221];
    scanf("%s %s",&st, &sd);
    int i=0;
    while(1)
    {
        if(st[i]=='\0' && sd[i]=='\0')
        {
            printf("equal");
            break;
        }
        else if(st[i]=='\0')
        {
            printf("st is smaller");
           break;
        }
        else if(st[i]=='\0')
        {
            printf("sd is smaller");
            break;
        }
        else if(st[i]>sd[i])
        {
            printf("sd is smaller");
            break;

        }
         else if(st[i]<sd[i])
         {
            printf("st is smaller");  
            break;     
         }
         else if(st[i]==sd[i])
         {
            i++;
            
         }
    }
}