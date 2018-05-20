#include<stdio.h>
int main()
{
int i;
char L[100];

gets(L);
for(i=0; L[i]!='\0'; i++)
{
    printf("%c", L[i]);

    if(L[i]==' ')
    {
        printf("\n");
    }

}
return 0;
}
