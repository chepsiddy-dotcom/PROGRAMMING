/*
Name:Siddy 	Chepkurui
Reg no:PA106/G/28720/25
*/
#include <stdio.h>
#include <stdlib.h>

void inputIntegers() {
    FILE *inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening input.txt for writing!\n");
        return;
    }
    
    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++ ) {
        scanf("%d", &num);
        fprintf(inputFile, "%d\n", num);
    }
    fclose(inputFile);
    printf("Integers saved to input.txt\n");
}

void processAndOutput() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading!\n");
        return;
    }
    
    int num, sum = 0;
    int count = 0;
    while (fscanf(inputFile, "%d", &num) == 1 && count < 10) {
        sum += num;
        count++;
    }
    fclose(inputFile);
    
    double average = (double)sum / 10;
    
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing!\n");
        return;
    }
    
    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);
    fclose(outputFile);
    printf("Results written to output.txt\n");
}

void readAndDisplay() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("input.txt not found!\n");
        return;
    }
    
    printf("\nContents of input.txt:\n");
    int num;
    while (fscanf(inputFile, "%d", &num) == 1) {
        printf("%d ", num);
    }
    printf("\n");
    fclose(inputFile);
    
    FILE *outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("output.txt not found!\n");
        return;
    }
    
    printf("Contents of output.txt:\n");
    char line;
    while (fgets(line, sizeof(line), outputFile)) {
        printf("%s", line);
    }
    fclose(outputFile);
}

int main() {
    inputIntegers();
    processAndOutput();
    readAndDisplay();
    return 0;
}

