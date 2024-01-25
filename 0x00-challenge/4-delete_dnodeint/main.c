int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    print_dlistint(head);
    printf("-----------------\n");

    // Test deleting nodes at various indices
    for (int i = 0; i <= 10; i++) {
        printf("Deleting node at index %d\n", i);
        if (delete_dnodeint_at_index(&head, i) == -1) {
            printf("Index %d is out of bounds\n", i);
        }
        print_dlistint(head);
        printf("-----------------\n");
    }

    // Free the memory for the remaining nodes
    free_dlistint(head);

    return (0);
}
