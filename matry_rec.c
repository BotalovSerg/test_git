#include <stdio.h>
#include <stdlib.h>

void print_abstract(void *p, int type_market);

int main()
{
    char c = 'W';
    int i = 777;
    double d = -25;

    void *p;
    p = &c;
    print_abstract(p, 1);
    p = &i;
    print_abstract(p, 2);
    p = &d;
    print_abstract(p, 3);

    return 0;

}

void print_abstract(void *p, int type_market)
{
    if (type_market == 1)
        printf("%c\n", *(char*)p);
    else if (type_market == 2)
        printf("%d\n", *(int*)p);
    else if (type_market == 3)
        printf("%lf\n", *(double*)p);
    else
    {
        printf("No type. Exit");
        exit(1);
    }    
    
}