#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string answer= get_string ("whats your name" );
    int age= get_int ("how old are you?" );

printf("you are %i\n", age);
printf("hello, %s\n", answer );
}

