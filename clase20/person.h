#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

typedef struct{
    int age;
    char name[31];
}Person;

int size = 2;
int name_lenght = 31;

#endif // PERSON_H_INCLUDED

Person** new_Lista();
Person* new_Person();
int* ask_Person_Name(Person* person);
int* ask_Person_Age(Person* person);
int* add_Person(Person* person, char* name, int* age);
