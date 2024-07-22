/*
    average weigh of elephant seals
    [name]
    July 2024
*/

#include <stdio.h>

double average_weight(int how_many, int weight[]){
    int i;
    double sum = 0.0;

    for (i = 0; i < how_many; i++){
        sum += weight[i];
    }
    return(sum/how_many);
}

void print_weight(int how_many, int weight[]){
    int i;

    print("Total data size: %d", how_many);
    for (i = 0; i < how_many; i++){
        printf("%d\t", weight[i]);
    }
}

int main(void){
    const int arraySize;
    int weight[arraySize];

    print_grades(arraySize, weight);
    print("\n\n");
    printf("the average is %.2f\n\n", average_weight(arraySize, weight));

    return 0;
}