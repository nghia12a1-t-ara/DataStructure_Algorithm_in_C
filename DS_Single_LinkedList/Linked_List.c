/******************************************************************************

Welcome to code of Lập trình - Điện tử
Series: C++
Author: Nghĩa Taarabt

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Node_t {
    uint32_t Data;
    struct Node_t * pNext; 
} NodeType;

/* Create a Static Linked List */
NodeType * HEAD = NULL;

void List_AddNode(uint32_t Data)
{
    /* Allocate new node memory */
    NodeType * pnewNode = (NodeType*)malloc(sizeof(NodeType));
    /* Assign new Data */
    pnewNode->Data = Data;
    /* New Node will contain address of Old First Node */
    pnewNode->pNext = HEAD;
    /* HEAD will contain address of the New Node */
    HEAD = pnewNode;
}

void List_DeleteNode(uint32_t NodeIdx)
{
    /* Allocate new node memory */
    NodeType * pPrev = HEAD;
    NodeType * pTemp = HEAD;
    uint32_t idx;
    
    /* Find the NodeIdx to assign pPrev & pTemp */
    for (idx = 0U; idx < NodeIdx; idx++)
    {
        /* Check if List has one Node only */
        if (0U == idx && 1U == NodeIdx) 
        {
            HEAD = HEAD->pNext;
            break;
        }
        else
        {
            if (idx == NodeIdx - 1U && pTemp) 
            {
                /* NodeA➔pNext = NodeB➔pNext = &NodeC */
                pPrev->pNext = pTemp->pNext;
                break;
            }
            else 
            {
                pPrev = pTemp;
                /* Position was greater than number of nodes in the list */
                if (pPrev == NULL)
                    break;
                pTemp = pTemp->pNext;
            }
        }
    }
    
    /* Free Memory of Deleted Node */
    free(pTemp);
}

int main()
{
    List_AddNode(10);
    printf("Node 1 Data = %d\n", HEAD->Data);
    List_AddNode(20);
    printf("Node 1 Data = %d\n", HEAD->Data);
    
    List_DeleteNode(2);
    printf("Node 1 Data = %d\n", HEAD->Data);
    
    return 0;
}
