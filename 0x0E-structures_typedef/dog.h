#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initialise a variable type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Description: longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

