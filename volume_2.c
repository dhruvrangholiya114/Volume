#include <stdio.h>

struct marks {
    int rollNo;
    char name[50];
    float chemistry;
    float mathematics;
    float physics;
};

int main() {
    struct marks students[5];
    int i;

    printf("Enter the marks of 5 students:\n");

    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Chemistry marks: ");
        scanf("%f", &students[i].chemistry);
        printf("Mathematics marks: ");
        scanf("%f", &students[i].mathematics);
        printf("Physics marks: ");
        scanf("%f", &students[i].physics);
    }

    
    printf("\nEntered marks and percentage:\n");
    printf("Roll No\tName\t\tChemistry\tMathematics\tPhysics\t\tPercentage\n");
    for (i = 0; i < 5; i++) {
        float totalMarks = students[i].chemistry + students[i].mathematics + students[i].physics;
        float percentage = (totalMarks / 300) * 100;
        printf("%d\t%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f%%\n", students[i].rollNo, students[i].name, students[i].chemistry, students[i].mathematics, students[i].physics, percentage);
    }


}

