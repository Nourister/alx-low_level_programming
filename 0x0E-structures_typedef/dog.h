#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initializes my dog
 * @d: pointer to struct my dog
 * @name: my od initialze
 * @age: my dog age
 * @owner: the owner of the dog
 *
 * Description: this struct is for dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - typedef for dog
 * init-dog - initialise the type struct dog
 * _putchar - prints the character
 * @c: the value
 */

/* additional function prototypes to be used */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
