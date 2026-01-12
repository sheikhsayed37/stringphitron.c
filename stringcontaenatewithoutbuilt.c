#include <stdio.h>
#include <string.h>
int main()
{
    char st[233],sd[3445];
    scanf("%s %s",st ,sd);
    
                                  //scanf("%s",&st)  space doesnot count;
     int count=0,count2=0;
for(int i=0;st[i]!='\0';i++)
{
    count++;
}
for(int i=0;sd[i]!='\0';i++)
{
    count2++;
}
int length=count;
int length2=count2;

for(int i=length;i<=length+length2;i++)

    {
        st[i]=sd[i-length];

    }
    printf("%s %s",st,sd);
}