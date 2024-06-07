#include <stdio.h>

struct student {
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct student students[2];
    int i;

    // Input marks for 2 students
    for (i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics marks (out of 100): ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    // Display mark sheets for 2 students
    for (i = 0; i < 2; i++) {
        float percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        printf("Mark Sheet for Student %d:\n", i+1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry: %d\n", students[i].chem_marks);
        printf("Mathematics: %d\n", students[i].maths_marks);
        printf("Physics: %d\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", percentage);
    }

    return 0;
}