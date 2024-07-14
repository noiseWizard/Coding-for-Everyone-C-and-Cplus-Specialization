/*
    sin and cosine table
    [name]
    July 2024
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double value; //initialises value as a double

    printf("VALUE\tSINE\tCOSINE\n"); //prints a tabbed heading with the following columns: VALUE    SINE    COSINE
    for (value = 0.0; value <= 1.0; value += 0.1) { //creates a for loop which with a counter up to 1.0, increasing by 0.1 each time
        double sine = sin(value); //initilises sine to use sin function, calculated by value
        double cosine = cos(value);// same for cos-^
        printf("%lf\t%lf\t%lf\n", value, sine, cosine); //prints long float outputs for the following variables: value, sin and cosine.
    }
    return 0; //return 0 to confirm successful output.
}