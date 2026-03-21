#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};


void updatemarks(struct Student *s, int newmarks) {
    s->marks = newmarks;  
}


void printstudent(struct Student s) {
    printf("Roll No: %d, Name: %s, Marks: %d\n", s.roll, s.name, s.marks);
}

int main() {
    struct Student st;

    printf("Enter roll number: ");
    scanf("%d", &st.roll);
    printf("Enter name: ");
    scanf("%s", st.name);  
    printf("Enter marks: ");
    scanf("%d", &st.marks);

    printf("\nBefore update:\n");
    printstudent(st);

    updatemarks(&st, 95);

    printf("\nAfter update:\n");
    printstudent(st);

    return 0;
}
