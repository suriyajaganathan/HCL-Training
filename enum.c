#include <stdio.h>

enum status {
    PENDING,
    SHIPPED,
    DELIVERED
};

void displayStatus(enum status s) {
    if (s == PENDING)
        printf("Order Status : Pending\n");
    else if (s == SHIPPED)
        printf("Order Status : Shipped\n");
    else if (s == DELIVERED)
        printf("Order Status : Delivered\n");
}

int main() {
    enum status s;
    
    s= PENDING;
    displayStatus(s);

    s = SHIPPED;
    displayStatus(s);

    s = DELIVERED;
    displayStatus(s);

    return 0;
}
