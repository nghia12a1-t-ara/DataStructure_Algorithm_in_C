/******************************************************************************
* Single Linked List Library Header
******************************************************************************/

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

typedef struct Node_t {
    uint32_t Data;
    struct Node_t *pNext;
} NodeType;

typedef struct {
    NodeType *head;
    size_t size;
} SingleLinkedList;

SingleLinkedList* List_Create(void);
void List_AddNode(SingleLinkedList *list, uint32_t Data);
int List_DeleteNode(SingleLinkedList *list, size_t NodeIdx);
NodeType* List_Search(SingleLinkedList *list, uint32_t Data);
void List_Print(SingleLinkedList *list);
void List_Destroy(SingleLinkedList *list);

#ifdef __cplusplus
}
#endif

#endif // SINGLE_LINKED_LIST_H
