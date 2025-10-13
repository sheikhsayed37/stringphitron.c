#include <stdio.h>
#include <string.h>
int main()
{
    char st[233],sd[3445];
    scanf("%s %s",&st ,&sd);
    int length1 =strlen(st);
    int length2=strlen(sd);
for(int i=0;i<=length2;i++)
{
    st[i+length1]=sd[i];
}
printf("%s %s",st ,sd);


}   