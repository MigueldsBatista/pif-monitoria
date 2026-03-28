#include <stdio.h>
#include <malloc.h>

typedef struct Node{
    struct Node *next;
    int value;
} Node;

void add_first(Node **head, int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node){
        new_node->value = data;
        new_node->next = *head;
        *head = new_node;
    }
}

void remove_first(Node **head){
    if(*head){
        Node *delete = *head;
        printf("%d\n", delete->value);
        *head = (*head)->next;
        free(delete);
    }
}

void display(Node *head){
    while (head->next){
        printf("[%d]->", head->value);
        head=head->next;
    }
    printf("[%d]", head->value);
}

int main() {
    Node *head = NULL;
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add node\n");
        printf("2. Remove first node\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &data);
                add_first(&head, data);
                break;
            case 2:
                remove_first(&head);
                printf("First node removed.\n");
                break;
            case 3:
                if (head)
                    display(head);
                else
                    printf("List is empty.");
                printf("\n");
                break;
            case 4:
                while (head)
                    remove_first(&head);
                
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}