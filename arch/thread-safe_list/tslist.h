#ifndef TSLIST_H
#define TSLIST_H

typedef struct tslist_elem_s {
    void *ptr;
    struct tslist_elem_s *next;
} tslist_elem_t;

typedef struct tslist_s {
    int _list_size;
    tslist_elem_t *head, *tail;
} tslist_t;

tslist_t *tslist_create();
void tslist_release(tslist_t *list);
void tslist_append(tslist_t *list, void *ptr);
tslist_elem_t *tslist_first(tslist_t *list);
tslist_elem_t *tslist_next(tslist_elem_t *current);

#endif