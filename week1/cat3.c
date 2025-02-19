#include <cs50.h>
#include <stdio.h>

int get_possitive_int (void);
void meow(int n);



int main(void)
{    int times = get_possitive_int();
     meow(times);
}























int get_possitive_int (void)
{ int n;
    do
    {
        n = get_int ("Number of meows ");

    }
    while (n < 1);
    return n;
}














void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
