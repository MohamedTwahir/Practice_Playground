#include <stdio.h>

int main()
{
    int m = 16, n = 10;
    int o = 20, p = 30;
    if (m > n && m != 0)
    {
        printf("&&(AND) Operator : Returns true when both conditions are true\n");
    }
    if (o > p || p != 20)
    {
        printf(" ||(OR) Operator : Only one condition is required to be true\n");
    }
    if (!(m > n && m != 0))
    {
        printf("!(NOT) Operator : Both conditions are true and it will make it false\n");
    }
    else
    {
        printf(" !(NOT) Operator : Both conditions are true. " \
      "But, status is inverted as false\n");
    }
}