/******************************************************************************

Welcome to code of Lập trình - Điện tử
Series: C++
Author: Nghĩa Taarabt

*******************************************************************************/

#include "Linked_List.h"
#include <stdio.h>
#include <stdlib.h>

SingleLinkedList* List_Create(void) {
    SingleLinkedList *list = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
    if (list) {
        list->head = NULL;
        list->size = 0;
    }
    return list;
}

void List_AddNode(SingleLinkedList *list, uint32_t Data) {
    if (!list) return;
    NodeType *pnewNode = (NodeType*)malloc(sizeof(NodeType));
    if (!pnewNode) return;
    pnewNode->Data = Data;
    pnewNode->pNext = list->head;
    list->head = pnewNode;
    list->size++;
}

int List_DeleteNode(SingleLinkedList *list, size_t NodeIdx) {
    if (!list || !list->head || NodeIdx >= list->size) return 0;
    NodeType *pPrev = NULL;
    NodeType *pTemp = list->head;
    size_t idx = 0;
    while (pTemp && idx < NodeIdx) {
        pPrev = pTemp;
        pTemp = pTemp->pNext;
        idx++;
    }
    if (!pTemp) return 0;
    if (pPrev) {
        pPrev->pNext = pTemp->pNext;
    } else {
        list->head = pTemp->pNext;
    }
    free(pTemp);
    list->size--;
    return 1;
}

NodeType* List_Search(SingleLinkedList *list, uint32_t Data) {
    if (!list) return NULL;
    NodeType *pTemp = list->head;
    while (pTemp) {
        if (pTemp->Data == Data) return pTemp;
        pTemp = pTemp->pNext;
    }
    return NULL;
}

void List_Print(SingleLinkedList *list) {
    if (!list) return;
    NodeType *pTemp = list->head;
    printf("List: ");
    while (pTemp) {
        printf("%u ", pTemp->Data);
        pTemp = pTemp->pNext;
    }
    printf("\n");
}

void List_Destroy(SingleLinkedList *list) {
    if (!list) return;
    NodeType *pTemp = list->head;
    while (pTemp) {
        NodeType *next = pTemp->pNext;
        free(pTemp);
        pTemp = next;
    }
    free(list);
}
