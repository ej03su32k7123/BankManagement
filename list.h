#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct stuff
{
    char *name;
    char *password;
    struct staff *next;

} Stuff;

typedef struct customer
{
    char *name;
    int balance;
    char *handle; /*經手的員工ID*/
    struct staff *next;

}Customer;



#endif // LIST_H_INCLUDED
