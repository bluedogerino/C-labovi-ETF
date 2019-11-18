#include <stdio.h>

int main()
{
    int broj;
    printf(" Unesite jedan broj: ");
    scanf("%d", &broj);
    if (broj%2==0)
        printf("Broj %d je paran", broj);
    else
        printf("Broj %d je neparan", broj);
    return 0;
}
