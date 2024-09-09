#include <stdio.h>
#include <string.h>
char rev(char b[]);
void main()
{
    int T,c;
    scanf("%d", &T);
    if (T >= 0 && T <= 100) 
    {
        int a[T];
        for (int i = 0; i < T; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < T; i++)
        {
            char b[100];
            if (a[i] >= 0 && a[i] <= 100000000)
            {
                for (int j = 0; a[i] > 0; j++)
                {
                    c = a[i] % 16;
                    switch (c)
                    {
                    case 0:
                        b[j] = '0';
                        break;
                    case 1:
                        b[j] = '1';
                        break;
                    case 2:
                        b[j] = '2';
                        break;
                    case 3:
                        b[j] = '3';
                        break;
                    case 4:
                        b[j] = '4';
                        break;
                    case 5:
                        b[j] = '5';
                        break;
                    case 6:
                        b[j] = '6';
                        break;
                    case 7:
                        b[j] = '7';
                        break;
                    case 8:
                        b[j] = '8';
                        break;
                    case 9:
                        b[j] = '9';
                        break;
                    case 10:
                        b[j] = 'A';
                        break;
                    case 11:
                        b[j] = 'B';
                        break;
                    case 12:
                        b[j] = 'C';
                        break;
                    case 13:
                        b[j] = 'D';
                        break;
                    case 14:
                        b[j] = 'E';
                        break;
                    case 15:
                        b[j] = 'F';
                        break;
                    }printf("%c\n",b[j]);
                    a[i] =a[i]/16;
                }
            }

            if(strlen(b)<=1)
                printf("%s",b);
            else
                rev(b);
            
        }
    }
}

char rev(char b[])
{
    char a[100];
    int n = strlen(b);
    
    for (int i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[n-i-1];
    }
    printf("%s",a);
    return '\0';
}