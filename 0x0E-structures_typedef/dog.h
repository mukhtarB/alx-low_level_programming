#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure holding the properties of a dog.
 *
 * @name: String pointer to the name variable.
 * @owner: String pointer to the owner variable.
 * @age: Float variable for dog age.
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _len(char *str);
char *_strcpy(char *s2, char *s1);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* ifndef _DOG_H_ */
