#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: pints name, age, and owner of the dog
 * If an element is NULL, print (nil) instead.
 * If d is NULL, does nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
