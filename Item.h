/**
 * @description
 * @fileName Item.h.
 * @author komat
 * @date 8/2/16.
 * @version 0.0
 */

#ifndef ITEMLIST_ITEM_H
#define ITEMLIST_ITEM_H

#include <stdlib.h>

/**
 *
 */
typedef struct item_template {
    struct item_template *prev;
    struct item_template *next;
    void *val;
} item;

/**
 *
 * @param val
 * @return
 */
item *item_new(void *val);

#endif //ITEMLIST_ITEM_H
