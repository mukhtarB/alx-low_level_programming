#include <stdio.h>
#include "dog.h"
[2;2R[>77;30100;0c]10;rgb:bfbf/bfbf/bfbf\]11;rgb:0000/0000/0000\
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
