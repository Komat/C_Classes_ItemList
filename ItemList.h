/**
 * @description
 * @fileName List.h.
 * @author komat
 * @date 8/2/16.
 * @version 0.0
 */

#ifndef ITEMLIST_ITEMLIST_H
#define ITEMLIST_ITEMLIST_H

#include <stdlib.h>
#include "Item.h"

/**
 *
 */
typedef enum {
    LIST_HEAD,
    LIST_TAIL
} list_direction;


/**
 *
 */
typedef struct {
    item *head;
    item *tail;
    unsigned int len;

    void (*free)(void *val);

    int (*match)(void *a, void *b);
} item_list;


/**
 *
 */
typedef struct {
    item *next;
    list_direction direction;
} list_iterator;


/**
 *
 * @return
 */
item_list *item_list_new();

/**
 *
 * @param self
 * @param node
 * @return
 */
item *item_list_rpush(item_list *self, item *node);

/**
 *
 * @param self
 * @param node
 * @return
 */
item *item_list_lpush(item_list *self, item *node);

/**
 *
 * @param self
 * @param val
 * @return
 */
item *item_list_find(item_list *self, void *val);

/**
 *
 * @param self
 * @param index
 * @return
 */
item *item_list_at(item_list *self, int index);

/**
 *
 * @param self
 * @return
 */
item *item_list_rpop(item_list *self);

/**
 *
 * @param self
 * @return
 */
item *item_list_lpop(item_list *self);

/**
 *
 * @param self
 * @param node
 */
void item_list_remove(item_list *self, item *node);

/**
 *
 * @param self
 */
void item_list_destroy(item_list *self);

/**
 *
 * @param list
 * @param direction
 * @return
 */
list_iterator *item_list_iterator_new(item_list *list, list_direction direction);

/**
 *
 * @param node
 * @param direction
 * @return
 */
list_iterator *item_list_iterator_new_from_node(item *node, list_direction direction);

/**
 *
 * @param self
 * @return
 */
item *item_list_iterator_next(list_iterator *self);

/**
 *
 * @param self
 */
void item_list_iterator_destroy(list_iterator *self);


#endif //ITEMLIST_ITEMLIST_H
