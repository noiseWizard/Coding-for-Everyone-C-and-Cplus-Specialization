#include <stdio.h>
#include <stdlib.h> //required for EOF function

#define MAX_SIZE 1000 // defines the max size

int main() {
    FILE *fp;
    int data[MAX_SIZE];
    int i = 0;

    // Open the file for reading
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("ERROR:\nfile does not exist. check data is called data.txt and in the same directory before running again");
        return 1;
    }

    // Read numbers from the file using fscanf
    while (fscanf(fp, "%d", &data[i]) != EOF && i < MAX_SIZE) {
        // Read an integer and store it in the array
        i++;
    }

    // Close the file
    fclose(fp);

    // Print the read data
    printf("Numbers read from the file:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", data[j]);
    }
    printf("\n");

    // You can now use the data array for further processing

    return 0;
}