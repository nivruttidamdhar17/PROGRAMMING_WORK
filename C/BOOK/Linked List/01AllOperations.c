#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node* start);
struct node *print_ll(struct node* start);
struct node *add_node_beg(struct node* start);
struct node *add_node_end(struct node* start);
struct node* insert_before(struct node* start);
struct node* insert_after(struct node* start);
struct node* del_beg_node(struct node* start);
struct node* del_end_node(struct node* start);
struct node* del_node(struct node* start);
struct node* del_node_after(struct node* start);
struct node* del_list(struct node* start);
struct node* sort_list(struct node* start);

void main()
{
    int options;
    do
    {
        printf("\n\n**************************************************Menu*************************************************");
        printf("\n1. Create a List");
        printf("\n2. Display the list.");
        printf("\n3. Add a node at the beginning.");
        printf("\n4. Add a node at the end of the list");
        printf("\n5. Add a node before a given node");
        printf("\n6. Add a node after a given node");
        printf("\n7. Delete a node from the beginning.");
        printf("\n8. Delete a node from the end.");
        printf("\n9. Delete a given node.");
        printf("\n10. Delete a node after a given node.");
        printf("\n11. Delete the entire list.");
        printf("\n12. Sort the list.");
        printf("\n13. EXIT");
        printf("\n*******************************************************************************************************");
        
        printf("\n\nEnter Your Option: ");
        scanf("%d",&options);

        switch(options)
        {
            case 1: 
                start = create_ll(start);
                printf("Link list created!");
                break;
            case 2: 
                start = print_ll(start);
                if(start != NULL)
                {
                    printf("\n\nDisplayed succesfully!");
                }
                break;
            case 3:
                start = add_node_beg(start);
                printf("\nNode Added at beginning!");
                break;
            case 4:
                start = add_node_end(start);
                printf("\nNode added at end!");
                break;
            case 5:
                start = insert_before(start);
                printf("\nNode inserted before given value node!");
                break;
            case 6:
                start = insert_after(start);
                printf("\nNode inserted after given node!");
                break;
            case 7:
                start = del_beg_node(start);
                printf("Deleted beginning node!");
                break;
            case 8:
                start = del_end_node(start);
                printf("End node deleted!");
                break;
            case 9:
                start = del_node(start);
                printf("Node deleted from given value!");
                break;
            case 10:
                start = del_node_after(start);
                printf("Node deleted after given value!");
                break;
            case 11:
                start = del_list(start);
                if(start == NULL)
                {
                    printf("\nDeleted entire list!");
                }
                break;
            case 12:
                start = sort_list(start);
                break;
            case 13: printf("Exit succesfully!");
                break;
        }
    } while (options != 13);
}

struct node* create_ll(struct node* start)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to end the linked list! ");
    printf("\nEnter data: ");
    scanf("%d", &num);

    while(num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;

        if(start == NULL)
        {
            new_node -> next= NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("Enter data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node* print_ll(struct node* start)
{
    if(start == NULL)
    {
        printf("List is empty!");
        return start;
    }
    struct node* ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("| %d |\t", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node* add_node_beg(struct node* start)
{
    struct node* new_node;
    if(start != NULL)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->next = start;
        start = new_node;
        printf("Enter data: ");
        scanf("%d", &new_node->data);
    }
    else
    {
        printf("Link list is empty!");
    }
    return start;
}

struct node* add_node_end(struct node* start)
{
    struct node* ptr;
    ptr = start;
    if(start == NULL)
    {
        printf("List is empty!");
        return start;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    ptr->next = new_node;
    new_node->next = NULL;
    printf("Enter data of new node: ");
    scanf("%d", &new_node->data);
    return start;
}

struct node* insert_before(struct node* start)
{
    struct node *preptr, *ptr, *new_node;
    int num, value;
    printf("Enter data: ");
    scanf("%d",&num);
    printf("Enter value before data to be inserted: ");
    scanf("%d",&value);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    new_node->next = ptr;
    preptr->next = new_node;
    return start;
}

struct node* insert_after(struct node* start)
{
    struct node *ptr, *preptr, *new_node;
    int value;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&new_node->data);
    printf("Enter value of node after data to be insert: ");
    scanf("%d",&value);

    ptr = start;
    preptr = ptr;
    while(preptr->data != value)
    {
        preptr=ptr;
        ptr = ptr->next;
    }
    new_node->next = ptr;
    preptr->next = new_node;
    return start;
}

struct node* del_beg_node(struct node* start)
{
    struct node* ptr;
    if(start == NULL)
    {
        printf("List is empty!");
        return start;
    }
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct node* del_end_node(struct node* start)
{
    struct node *preptr, *ptr;
    
    ptr = start;
    while(ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}

struct node* del_node(struct node* start)
{
    struct node *ptr, *preptr;
    int value;
    printf("Enter value of the node which is to deleted: ");
    scanf("%d",&value);
    
    ptr = start;
    if(ptr->data == value) //if data found at beginning node directly call delete_beg() function.
    {
        start = del_beg_node(start);
        return start;
    }
    while(ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node* del_node_after(struct node* start)
{
    struct node *preptr, *ptr;
    int value;
    printf("Enter the value after which node to be deleted: ");
    scanf("%d", &value);
    
    ptr = start;
    preptr = ptr;
    while(preptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node* del_list(struct node* start)
{
    struct node* ptr;
    if(start == NULL)
    {
        printf("List is already empty!");
        return start;
    }
    if(start != NULL)
    {
        ptr = start;
        while(ptr != NULL)
        {
            printf("\n %d is to be deleted next", ptr -> data);
            start = del_beg_node(ptr);
            ptr = start;
        }
    }
    return start;
}

struct node* sort_list(struct node* start)
{
    struct node* ptr1, *ptr2;
    int temp;
    ptr1 = start;
    while(ptr1->next != NULL)
    {
        ptr2= ptr1->next;
        while(ptr2 != NULL)
        {
            if(ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}
