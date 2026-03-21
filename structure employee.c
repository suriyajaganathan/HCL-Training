#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    struct Employee emp[10];
    double total = 0, max = -1;
    int i;
    for(i = 0; i < 5; i++) {
        printf("employee %d: ", i+1);
        printf("Enter ID :");
        scanf("%d", &emp[i].id);

        printf("Enter name:");
        scanf("%s", emp[i].name);

        printf("Enter salary:");
        scanf("%lf", &emp[i].salary);

        total += emp[i].salary;
        if(emp[i].salary > max)
            max = emp[i].salary;
    }

    
    printf("\nTotal Salary Payout: %.2lf\n", total);

    printf("\nEmployee(s) with Highest Salary:\n");
    for(i = 0; i < 10; i++) {
        if(emp[i].salary == max)
            printf("ID: %d, Name: %s, Salary: %.2lf\n",
                   emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}
