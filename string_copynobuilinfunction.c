#include<stdio.h>
#include <string.h>
int main()
{
    char st[12],sd[11];
    scanf("%s %s",&st ,&sd);
    int length=strlen(sd);
    for(int i=0;i<=length;i++)    //<=must '\0' count 
    {
        st[i]=sd[i];
    }
    printf("%s %s",st,sd);


}