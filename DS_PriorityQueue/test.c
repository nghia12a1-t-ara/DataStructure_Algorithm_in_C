#include "PriorityQueue.h"
#include <stdio.h>

int main(void)
{
    uint32 taskID;
    uint8 priority;
    Bool_Type result;

    // Create a priority queue with capacity 5
    result = PriorityQueue_Create(5);
    if (!result) {
        printf("Failed to create priority queue!\n");
        return 1;
    }

    // Push some tasks with different priorities
    PriorityQueue_PushData(101, 2);
    PriorityQueue_PushData(102, 5);
    PriorityQueue_PushData(103, 1);
    PriorityQueue_PushData(104, 4);
    PriorityQueue_PushData(105, 3);

    // Print the queue (if test print is enabled)
#ifdef PRIORITY_QUEUE_TEST
    PriorityQueue_Print();
#endif

    // Pop all tasks and print them
    printf("\nPop tasks by priority:\n");
    while (PriorityQueue_PopData(&taskID, &priority)) {
        printf("TaskID: %u, Priority: %u\n", taskID, priority);
    }

    // Destroy the queue
    PriorityQueue_Destroy();

    // Print the queue (if test print is enabled)
#ifdef PRIORITY_QUEUE_TEST
    PriorityQueue_Print();
#endif
    return 0;
}
