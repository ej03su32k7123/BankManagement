#include "list.h"
#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

Stuff *stuff_merge_sort(Stuff *first);
Stuff *stuff_split(Stuff *first);
Stuff *stuff_merge(Stuff *a,Stuff *b);
Customer *customer_merge_sort(Customer *first);
Customer *customer_split(Customer *first);
Customer *customer_merge(Customer *a,Customer *b);

#endif // SORT_H_INCLUDED
