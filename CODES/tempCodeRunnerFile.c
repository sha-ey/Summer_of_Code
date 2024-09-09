#include <stdio.h>
#include <string.h>
void rev(char *P);
void main()
{
    int T;
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
                    int c = a[i] % 16;
                    switch (c)
                    {
                    case 0 || 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9:
                        b[j] = c;
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
                    }
                    a[i] /= 16;
                }
            }

            rev(b);
            printf("%s", b);
        }
    }
}

void rev(char *P)
{
    char a[100];
    int n = strlen(P);
    for (int i = 0; *(P + i) != '\0'; i++)
    {
        a[i] = *(P + n - i - 1);
    }
    strcpy(P, a);
}