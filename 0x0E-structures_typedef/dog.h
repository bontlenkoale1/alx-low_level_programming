#ifndef _HEADE_
#define _HEADER_

/**
 * struct dog - dog identity
 * @name: The dogs name
 * @age: the dogs age
 * @owner: the owners name
 * Description: the dogs identity
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char name, float age, char *owner);
void print_dog(struct dog *d);
#endif

