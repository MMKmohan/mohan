#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char s[50];
gets(s);
int i=strlen(s);
s[i]='.';
s[i+1]='\0';
puts(s);
}
