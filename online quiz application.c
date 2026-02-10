#include <stdio.h>
#include <string.h>

int main() {
    int score = 0;
    int answer;

    printf("=== Welcome to Online Quiz ===\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which language is used for web apps?\n");
    printf("1. Python\n2. Java\n3. JavaScript\n4. C++\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. Which company developed Python?\n");
    printf("1. Microsoft\n2. Google\n3. Sun Microsystems\n4. None\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 4) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nYour final score is: %d out of 3\n", score);

    return 0;
}
