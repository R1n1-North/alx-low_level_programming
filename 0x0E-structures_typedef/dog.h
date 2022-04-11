#ifndef HEADER
#define HEADER dog.h
/**
 * struct dog - define structure dog
 * @name: what is the name of the dog
 * @age: what is the dogs age
 * @owner: who is the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
