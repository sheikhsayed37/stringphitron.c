#include <stdio.h>
#include <string.h>
int main()
{
    char st[34];
   fgets(st,16,stdin);         //scanf("%s",&st)  space doesnot count;
     int count=0;
for(int i=0;st[i]!='\0';i++)
{
    count++;
}
printf("%s\n",st);
printf("%d",count);
}