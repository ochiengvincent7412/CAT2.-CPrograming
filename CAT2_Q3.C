/*
Name ; Vincent ochieng Owigo 
Reg number ;PA106/G/28807/25
*/
#include <stdio.h>
#include <stdlib.h>

void writeInputFile();
void processFile();
void displayFiles();

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}

// Step 1: Ask for 10 integers and save them to input.txt
void writeInputFile() {
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);  // Each integer on a new line
    }

    fclose(fp);
    printf("\n 10 integers saved successfully to input.txt\n\n");
}

// Step 2: Read integers, calculate sum & average, and write to output.txt
void processFile() {
    FILE *inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);
    }

    int num, count = 0, sum = 0;
    while (fscanf(inFile, "%d", &num) == 1) { // read integers one by one
        sum += num;
        count++;
    }
    fclose(inFile);

    if (count == 0) {
        printf("No numbers found in input.txt.\n");
        exit(1);
    }

    float average = (float)sum / count;

    FILE *outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening output.txt for writing.\n");
        exit(1);
    }

    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(outFile);

    printf("Sum and average written to output.txt successfully\n\n");
}

// Step 3: Display contents of both input.txt and output.txt
void displayFiles() {
    FILE *fp;
    char line[100];

    printf("Contents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Cannot open input.txt\n");
        exit(1);
    }
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    printf("\n Contents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Cannot open output.txt\n");
        exit(1);
    }
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
}