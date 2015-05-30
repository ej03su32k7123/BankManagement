#include "sort.h"

Staff *merge(Staff *a,Staff *b)
{
    if (!a)
        return b;
    if (!b)
        return a;

    Staff *rlt=NULL;

    char *na=a->name;
    char *nb=b->name;
    if (strcmp(na,nb)<=0)
    {
        rlt=a;
        rlt->next=merge(a->next,b);
    }
    else
    {
        rlt=b;
        rlt->next=merge(a,b->next);
    }

    return rlt;

}

Staff *split(Staff *first)
{
    Staff *fast=first;
    Staff *slow=first;

    while (fast->next && fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    Staff *tmp=slow->next;
    slow->next=NULL;

    return tmp;

}

Staff *merge_sort(Staff *first)
{
    if (!first || !first->next)
        return first;

    Staff *second=split(first);
    first=merge_sort(first);
    second=merge_sort(second);

    return merge(first,second);

}

Customer *merge(Customer *a,Customer *b,char choice)  /*choice='A'為依Name排序 'B'為依Balance排序*/
{

    if (!a)
        return b;
    if (!b)
        return a;

    Customer *rlt=NULL;
    if (choice=='A')
    {
        char *na=a->name;
        char *nb=b->name;
        if (strcmp(na,nb)<=0)
        {
            rlt=a;
            rlt->next=merge(a->next,b,choice);
        }
        else
        {
            rlt=b;
            rlt->next=merge(a,b->next,choice);
        }
    }

    if (choice=='B')
    {
        int na=a->balance;
        int nb=b->balance;
        if (na<=nb)
        {
            rlt=a;
            rlt->next=merge(a->next,b,choice);
        }
        else
        {
            rlt=b;
            rlt->next=merge(a,b->next,choice);
        }
    }

    return rlt;

}

Customer *split(Customer *first)
{
    Customer *fast=first;
    Customer *slow=first;

    while (fast->next && fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    Customer *tmp=slow->next;
    slow->next=NULL;

    return tmp;

}

Customer *merge_sort(Customer *first,char choice)
{
    if (!first || !first->next)
        return first;

    Customer *second=split(first);
    first=merge_sort(first,choice);
    second=merge_sort(second,choice);

    return merge(first,second,choice);

}
