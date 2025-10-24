#include <stdio.h>
#include <stdbool.h>

int main(){

    int number = 27; // 4 bytes
    printf("Some number: %d\n", number);

    float floatingPointNumber = 3.14; // 4 bytes
    printf("Some floating point number: %.2f\n", floatingPointNumber);

    double pi = 3.14159265358979; // 8 bytes
    printf("Pi = %.14lf\n", pi);

    char letter = 'A'; // 1 byte
    printf("Some char: %c\n", letter);

    char name[] = "m47eus2";
    printf("Hello %s\n", name);

    bool binary = 1; // 1 byte
    printf("Some binary number: %d\n", binary);

    if(binary){
       printf("Binary is true\n"); 
    }
    else{
        printf("Binary is false\n");
    }

    return 0;
}