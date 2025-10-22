#include <stdio.h>

int main() {
    int marks, pass[10], fail[10];
    int i, passCount = 0, failCount = 0;
    float passTotal = 0, failTotal = 0;

    printf("Enter marks for students (-1 to stop):\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &marks);

        if (marks == -1)  
            break;

        if (marks >= 5 && marks <= 10) {
            pass[passCount] = marks;
            passTotal += marks;
            passCount++;
        } 
        else if (marks >= 0 && marks < 5) {
            fail[failCount] = marks;
            failTotal += marks;
            failCount++;
        } 
        else {
            printf("Invalid marks! Enter between 0 and 10.\n");
            i--;
        }
    }

    printf("\nPass Students Marks: ");
    for (i = 0; i < passCount; i++) {
        printf("%d ", pass[i]);
    }

    printf("\nFail Students Marks: ");
    for (i = 0; i < failCount; i++) {
        printf("%d ", fail[i]);
    }

    if (passCount > 0)
        printf("\nAverage of Pass Marks = %.2f", passTotal / passCount);
    else
        printf("\nNo pass marks entered.");

    if (failCount > 0)
        printf("\nAverage of Fail Marks = %.2f\n", failTotal / failCount);
    else
        printf("\nNo fail marks entered.\n");

    return 0;
}

