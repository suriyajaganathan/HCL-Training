#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct Node* reverseappend(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct Node *odd = NULL, *oddTail = NULL;
    struct Node *even = NULL, *evenTail = NULL;

    int index = 0;
    struct Node* curr = head;

    while (curr != NULL) {
        struct Node* nextNode = curr->next;
        curr->next = NULL;

        if (index % 2 == 0) { 
            if (!even) even = evenTail = curr;
            else {
                evenTail->next = curr;
                evenTail = curr;
            }
        } else { 
            if (!odd) odd = oddTail = curr;
            else {
                oddTail->next = curr;
                oddTail = curr;
            }
        }

        index++;
        curr = nextNode;
    }

    even = reverse(even);         
    oddTail->next = even;          
    return odd;
}

void printlist(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n; i++) {
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
        node->data = arr[i];
        node->next = NULL;

        if (!head) head = temp = node;
        else {
            temp->next = node;
            temp = node;
        }
    }

    head = reverseappend(head);
    printlist(head);

    return 0;
}
