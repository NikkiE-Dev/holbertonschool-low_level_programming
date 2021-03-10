#ifndef DOG_H
#define DOG_H
/**
 * dog_t - Typedef
 */
typedef struct dog dog_t;

/**
 * struct dog - stores info of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
