#include <stdio.h>

int main()
{
    int a,b,c,s;
    printf("Unesite stranicu a : ");
    scanf("%d", &a);
    printf("Unesite stranicu b : ");
    scanf("%d", &b);
    printf("Unesite stranicu c : ");
    scanf("%d", &c);
    printf("Trougao je : ");
    double povrsina,obim;
    s=((a+b+c)/2);
    povrsina=(pow(((s*(s-a)*(s-b)*(s-c))),0.5));
    obim=(a+b+c);
    if ((a+b)>c && ((b+c)>a) && ((a+c)>b))
    {

                if(a==b && b==c && c==a)
                {
                    printf("Jednakostranicni trougao\n");
                    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
                    {
                        printf("Trougao je pravougli\n");
                        printf("Povrsina : %.2f", povrsina);
                        printf("Obim : %.2f", obim);
                    }
                }
                else if(a==b || b==c)
                {
                    printf("Jednakokraki trougao\n");
                    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
                    {
                        printf("Trougao je pravougli\n");
                        printf("Povrsina : %.2f", povrsina);
                        printf("Obim : %.2f", obim);
                    }
                }
                else if(a!=b && b!=c)
                {
                    printf("Raznostranicni trougao\n");
                    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
                    {
                        printf("Trougao je pravougli\n");
                        printf("Povrsina : %.2f \n", povrsina);
                        printf("Obim : %.2f \n", obim);
                    }
                }
    }
        else
            {
                printf("Trougao se ne moze konstruisati.\n");
            }

    return 0;
}
