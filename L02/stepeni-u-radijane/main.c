#include <stdio.h>

int main()
{
    float radijan, stepen;
    double pi=3.14;
    printf("Unesite stepen:");
    scanf("%f", &stepen);
    radijan = stepen / (180/pi);
    printf("Iznos stepeni u radijanima je %.2f", radijan);
    return 0;
}
