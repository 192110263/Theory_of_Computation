#include <stdio.h>

int main() {
    int currentState = 0;
    char input[100];

    // Input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Simulate the DFA
    for (int i = 0; input[i] != '\0'; i++) {
        if (currentState == 0 && input[i] == '0') {
            currentState = 1; // Transition to state 1 if input is '0'
        } else if (currentState == 1 && input[i] == '1') {
            currentState = 1; // Stay in state 1 if input is '1'
        } else {
            currentState = -1; // Invalid input or state, reject
            break;
        }
    }

    // Output the result
    if (currentState == 1) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}
