#include <stdio.h>

struct Product {
    double price;
    double discount; 
};

double calcdiscount(struct Product p) {
    return p.price - (p.price * p.discount / 100);
}


void updateprice(struct Product *p) {
    p->price = p->price - (p->price * p->discount / 100);
}

int main() {
    struct Product prod;

    printf("Enter price: ");
    scanf("%lf", &prod.price);
    printf("Enter discount : ");
    scanf("%lf", &prod.discount);

    printf("Discounted price (call by value): %.2lf\n", calcdiscount(prod));
    printf("Original price after call by value: %.2lf\n", prod.price);

    
    updateprice(&prod);
    printf("Price after call by address: %.2lf\n", prod.price);

    return 0;
}

