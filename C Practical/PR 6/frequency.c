#include <stdio.h>

int main() {
    char str[100];
    int i,count=1,len=0,j;

    printf("Enter a string: ");
    gets(str);
    while (str[len] != '\0') {
        len++;
    }
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j] && str[j] != ' ')
            {
                count++;
                str[j]=' ';

            }

        }
        if(str[i]!= ' ')
        {
            printf("'%c'=>%d\n",str[i],count);
            count=1;
        }

    }
    return 0;
}