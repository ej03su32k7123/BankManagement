#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct staff
{
    char *name;
    char *password;
    struct staff *next;

} Staff;

typedef struct admin
{
    char *name;
    int balance;
    char *handle; /*經手的員工ID*/
    struct staff *next;

}Admin;

#endif // LIST_H_INCLUDED
