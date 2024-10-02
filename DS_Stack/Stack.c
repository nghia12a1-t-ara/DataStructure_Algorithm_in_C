/******************************************************************************

Welcome to code of Lập trình - Điện tử
Series: DSA
Author: Nghĩa Taarabt

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef enum
{
    STACK_OK        =   0U,
    STACK_EMPTY     =   1U,
    STACK_OVERFLOW  =   2U,
} StackStatus_t;

typedef struct
{
    uint32_t * pData;    // Pointer point to Data Array in Heap
    uint32_t Top;
    uint32_t MAX;
} StackType;

StackType Stack = { 0 };

/* Initialize an empty stack */
void Stack_Init(uint32_t maxItem)
{
    /* Allocate Memory for Stack Data */
    Stack.pData = (uint32_t*)malloc(maxItem * sizeof(uint32_t));
    Stack.Top = 0U;
    Stack.MAX = maxItem;
}

/* Push Data to top of Stack */
StackStatus_t Stack_Push(uint32_t inputData)
{
    StackStatus_t eStatus = STACK_OVERFLOW;

    if( Stack.Top < Stack.MAX )
    {
        Stack.pData[Stack.Top++] = inputData;
        eStatus = STACK_OK;
    }

    return eStatus;
}

/* Pop Data from top of Stack */
StackStatus_t Stack_Pop(uint32_t * pOutData)
{
    StackStatus_t eStatus = STACK_EMPTY;

    if( Stack.Top > 0U )
    {
        *pOutData = Stack.pData[--Stack.Top];
        eStatus = STACK_OK;
    }

    return eStatus;
}

void printStack(void)
{
    int i;
    printf("Stack Data: ");
    for(i = 0U; i < Stack.Top; i++)
    {
        printf("%d ", Stack.pData[i]);
    }
    printf("\n");
}

void main()
{
    uint32_t PopData;
    
    Stack_Init(3);
    printStack();   // Empty
    
    printf("push status = %d => ", Stack_Push(1));    // status = 0 = STACK_OK
    printStack();   // 1
    
    printf("push status = %d => ", Stack_Push(2));    // status = 0 = STACK_OK
    printStack();   // 1 2
    
    printf("push status = %d => ", Stack_Push(3));    // status = 0 = STACK_OK
    printStack();   // 1 2 3
    
    printf("push status = %d => ", Stack_Push(4));    // status = 2 = STACK_OVERFLOW
    printStack();   // 1 2 3
    
    printf("pop status = %d => ", Stack_Pop(&PopData));    // status = 0 = STACK_OK
    printf(" pop data = %d \n", PopData);   // 3
    
    printf("pop status = %d => ", Stack_Pop(&PopData));    // status = 0 = STACK_OK
    printf(" pop data = %d \n", PopData);   // 2
    
    printf("pop status = %d => ", Stack_Pop(&PopData));    // status = 0 = STACK_OK
    printf(" pop data = %d \n", PopData);   // 1
    
    printf("pop status = %d => ", Stack_Pop(&PopData));    // status = 1 = STACK_EMPTY
    printf(" pop data = %d \n", PopData);   // 1
}
