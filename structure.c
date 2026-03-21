#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    int i, maxMarks = -1;

    for(i = 0; i < 5; i++) {
        printf("student %d: ",i+1);
        printf("roll number:");
        scanf("%d", &students[i].roll);

        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("mark:");
        scanf("%d", &students[i].marks);

        if(students[i].marks > maxMarks)
            maxMarks = students[i].marks;
    }

    printf("\nTopper Details:\n");
    for(i = 0; i < 5; i++) {
        if(students[i].marks == maxMarks) {
            printf("Roll No: %d, Name: %s, Marks: %d\n",
                   students[i].roll, students[i].name, students[i].marks);
        }
    }

    return 0;
}
