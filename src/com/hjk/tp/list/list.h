#ifndef AYP3_LIST_H
#define AYP3_LIST_H

#include <stdio.h>

typedef struct node {
    struct node *next;
    void *data;
} node;

typedef struct list {
    node *head;
    int length;
} list;

list *new_empty_list();

list *new_list(void *data, size_t data_size);

void list_add(list *lista, void *data, size_t data_size);

int list_length(list *lista);

void *list_get_value(list *lista, int index);

int list_remove(list *lista, int index);

void list_print(list *lista);

void list_destroy(list *lista);

#endif //AYP3_LIST_H
