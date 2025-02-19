#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{

   int n = get_int("Number of meows\n ");
   meow();
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
