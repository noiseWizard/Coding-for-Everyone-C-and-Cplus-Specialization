#include <stdio.h>
#include <stdlib.h> //required for EOF function

#define MAX_SIZE 1000 // defines the max size

double calc_average_weight(int how_many, int weight[]){
	int j;
	double sum = 0.0;

	for (j = 0; j < how_many; j++){
		sum += weight[j];
	}
	return(sum/how_many);
}

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

    printf("++++++++++++++++++++++++++++++++++");
    printf("the average weight is %.2f\n\n", calc_average_weight(i,data));

    return 0;
}