#include <stdio.h>
#include <string.h>
int main()
{
    char st[34];
   gets(st);         //scanf("%s",&st)  space doesnot count;
     int count=0;
for(int i=0;st[i]!='\0';i++)
{
    count++;
}
printf("%d",count);
}