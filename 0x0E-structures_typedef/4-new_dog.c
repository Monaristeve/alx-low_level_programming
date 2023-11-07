#include <stdlib.h>
#include "dog.h"
/**
* new_dog -a function that  creates a new dog
* @name: dogs name
* @age: dogs age
* @owner: dog owners
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, k, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog->owner = malloc(k * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		dog->owner[j] = owner[j];
	return (dog);
}

