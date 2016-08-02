/**
 * @description
 * @fileName main.c.
 * @author komatsu
 * @date 8/2/16.
 * @version 0.0
 */

#include <stdio.h>
#include "ItemList.h"


int main(void) {

    item_list *langs = item_list_new();

    item *c = item_list_rpush(langs, item_new("c"));
    item *js = item_list_rpush(langs, item_new("js"));
    item *ruby = item_list_rpush(langs, item_new("ruby"));

    item *node;
    list_iterator *it = item_list_iterator_new(langs, LIST_HEAD);
    while ((node = item_list_iterator_next(it))) {
        printf("Iterator :: %s\n", (char *) node->val);
    }

    item_list_iterator_destroy(it);
    item_list_destroy(langs);

    return 0;
}