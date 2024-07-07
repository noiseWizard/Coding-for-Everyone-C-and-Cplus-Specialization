/*
    OBJECTIVE:
    Write a program that can give the sine of a value between 0 and 1 (non inclusive).
    You will be graded based on whether the program can output a value in the correct range and
    whether your code is well-formatted and logically correct.

    RESPONSE: 
    It appears a video was missing from the course, I've done my best to figure this out despite this.
*/

#include<stdio.h>
#include<math.h>

int main() {
    double value = 0.666;
    double sine = sin(value);
    printf("The sine of %lf is %lf\n", value, sine);
    return 0;
}