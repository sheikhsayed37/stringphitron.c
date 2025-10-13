#include <stdio.h>
#include <string.h>
int main()
{
    char st[233],sd[3445];
    scanf("%s %s",&st ,&sd);
    int length =strlen(st);
    int length2=strlen(sd);

    for(int i=length;i<=length+length2;i++)

    {
        st[i]=sd[i-length];

    }
    printf("%s %s",st ,sd);
}