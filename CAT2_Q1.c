/*
Name ; Vincent ochieng Owigo 
Reg number PA106/G/28807/25
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // Nested for loop to print elements
    for (int i = 0; i < 2; i++) {          // Loop through rows
        for (int j = 0; j < 2; j++) {      // Loop through columns
            printf("%d ", scores[i][j]);   // Print each element
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}