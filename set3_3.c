#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    int i,j,n,m,k,l;
    gets(s);
    n=strlen(s);
    l=n/2;
    for(i=0;i<n;i++)
    {
        k=0;
        m=n-1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%c",s[i]);
            }
            if(i==m && j==k && i!=l)
            {
                if(i==j==l)
                {
                    continue;
                }
                 printf("%c",s[m]);
            }
            else{
                printf(" ");
            }
            m--;
            k++;
        }
        printf("\n");
    }
    return 0;
}

