#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
