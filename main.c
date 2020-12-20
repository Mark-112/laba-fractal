#include <stdio.h>
#include <stdlib.h>


int summa(n)
{
    if (n%10 == 0)
        return(n);
    return (n % 10) + (summa(n/10));
}

int zd1()
{
    int n;
    printf("vvedite N\n");
    scanf("%d", &n);
    printf("%d\n", summa(n));

    return 0;
}

int pow(a, n)
{
    if (n == 0)
        return 1;
    return a * pow(a, n-1);
}

int zd2()
{
    int a, b;
    printf("vvedite chislo\n");
    scanf("%d", &a);
    printf("vvedite stepen\n");
    scanf("%d", &b);
    printf("%d\n", pow(a, b));

    return 0;
}

int RevPrint(n)
{
    if (n < 10)
        return(n);
    int x, i;
    x = n;
    i = 1;
    while (x > 9)
    {
        x /= 10;
        i *= 10;
    }
    n -= x*i;
    return(x + 10*RevPrint(n));

}

int zd4()
{
    int n;
    printf("vvedite N\n");
    scanf("%d", &n);
    printf("%d\n", RevPrint(n));

    return 0;
}

int prime(n, i)
{
    if (i * i > n)
        return 0;
    if (n % i == 0)
        return 1;
    prime(n, i+1);
}

int zd6()
{
    int n;
    printf("vvedite chislo\n");
    scanf("%d", &n);
    if (n == 1)
        printf("NO\n");
    else
    {
        if (prime(n, 2) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

int equal(n, s)
{
    if (n % 10 == 0)
    {
        if (s == 0)
            return 1;
        return 0;
    }
    s -= n%10;
    n /= 10;
    return equal(n, s);
}

int zd7()
{
    int n, s;
    printf("vvedite oba chisla\n");
    scanf("%d%d", &n, &s);
    if (equal(n, s) == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

int main()
{
    int i = 1;
    while (i)
    {
        printf("viberite nomer zadachi\n");
        scanf("%d", &i);
        switch(i)
        {
        case 1: zd1(); break;
        case 2: zd2(); break;
        case 4: zd4(); break;
        case 6: zd6(); break;
        case 7: zd7(); break;
        }
    }
    return 0;
}

