#include <stdio.h>
#include <string.h>
int main()
{
    char st[233];
    scanf("%s",st);
    
                                  //scanf("%s",&st)  space doesnot count;
     int count=0,count2=0;
for(int i=0;st[i]!='\0';i++)
{
    count++;
}
int length =count;
char st2[233];
for(int i=length;i>=0;i--)
{
    st2[i]=st[i];  // hoi naiiiii
}
printf(" %s",st2);


}