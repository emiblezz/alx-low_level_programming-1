#ifndef _dog
#define _dog


/**
 * struct dog - discription of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
