#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initialise a variable type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Description: longer description
 */

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog;
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* description of other prototype */

/**
 * _putchar - print the struct dog
 * @c: the character value
 * Return: value
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
