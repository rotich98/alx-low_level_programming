#include "dog.h"

/**
 * _strdup - returns a pointer to space in memory containing copy of string
 * @ptr: pointer to the string
 * Return: Pointer to a string stored in memory.
 */
char *_strdup(char *ptr)
{
	char *dup;
	unsigned int x = 0;
	unsigned int y = 0;

	if (ptr == NULL)
		return (NULL);

	while (s[x] != '\0')
		x += 1;

	dup = malloc(x * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (y < x)
	{
		dup[y] = ptr[y];
		y++;
	}
	return (dup);
}

/**
 * new_dog -> create an instance of struct dog
 * @name: First parameter
 * @age: second parameter
 * @owner: Third parameter
 * Return: intance of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);

	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	return (newdog);
}
