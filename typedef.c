#include <stdio.h>


typedef struct {
    int id;
    char name[30];
    float price;
} Product;

int main() {
    Product p1, p2; 

    
    printf("Enter Product 1 ID, Name, Price: ");
    scanf("%d %s %f", &p1.id, p1.name, &p1.price);

    printf("Enter Product 2 ID, Name, Price: ");
    scanf("%d %s %f", &p2.id, p2.name, &p2.price);

    printf("\nProduct Details:\n");
    printf("ID: %d  Name: %s  Price: %.2f\n", p1.id, p1.name, p1.price);
    printf("ID: %d  Name: %s  Price: %.2f\n", p2.id, p2.name, p2.price);

    return 0;
}

