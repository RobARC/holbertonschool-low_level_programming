#ifndef DOG
#define DOG

/**
* struct dog -dog data
* @name: is a variable char name of the dog
* @age: is a float variable age of the dog
* @owner: is a char variable owner the dog
*/

struct dog
	{
	char *name;
	float age;
	char *owner;
	} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
