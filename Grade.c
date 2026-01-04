#include <stdio.h>

int main() {
    int n, i;
    int marks[50];
    int total = 0;
    float percentage;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    percentage = (total / (float)(n * 100)) * 100;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- RESULT -----");
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nGrade = %c", grade);

    return 0;
}
