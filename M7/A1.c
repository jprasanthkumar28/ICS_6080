// Write the function strend (s ,t ), which returns 1 if the string t occurs at the end of the string s, and zero otherwise. 
// Write the test cases and check your code against the test cases that you have defined.
#include<stdio.h>
#define MAXLINE 1000

int mgetline(char s[],int max);
int strend(char *s,char *t);
int mystrlen(char *t);

int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    int ret;
    mgetline(s,MAXLINE);
    mgetline(t,MAXLINE);
    ret = strend(s,t);
    printf("%d",ret);
    return 0;
}

int mgetline(char s[],int lim)
{
    int c,i;
    
    for(i=0;i<lim-1 && ((c=getchar())!=EOF) && c!='\n';++i)
        s[i]=c;

    if(c=='\n')
    {
        s[i]=c;
        ++i;
    }
    s[i]='\0';

    return i;
}

int strend(char *s,char *t)
{
    int len;
    len=mystrlen(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;
            
    --t;
    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

int mystrlen(char *t)
{
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}