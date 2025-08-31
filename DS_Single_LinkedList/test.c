#include "Linked_List.h"
#include <stdio.h>

int main(void)
{
    SingleLinkedList *list = List_Create();
    List_AddNode(list, 10);
    List_AddNode(list, 20);
    List_AddNode(list, 30);
    List_Print(list);

    printf("Delete node at index 1\n");
    List_DeleteNode(list, 1);
    List_Print(list);

    printf("Search for node with data 10: %s\n", List_Search(list, 10) ? "Found" : "Not Found");
    printf("Search for node with data 99: %s\n", List_Search(list, 99) ? "Found" : "Not Found");

    List_Destroy(list);
    return 0;
}
