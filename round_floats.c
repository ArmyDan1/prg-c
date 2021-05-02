#include <stdio.h>
#include <math.h>
#define RAND_TRESHOLD 100

int main() {
    float myArray[10];
    srand(time(NULL));
    generate_items(&myArray);
    show_items(&myArray);
    round_items(&myArray);
    printf("---\n");
    show_items(&myArray);
    return 0;
}

void generate_items(float *pole){
    for(int i = 0; i < 10; i++){
        pole[i] = (rand() % RAND_TRESHOLD) + (rand() % RAND_TRESHOLD) / (float)RAND_TRESHOLD;
    }
}

void show_items(float *pole){
    for(int i = 0; i < 10; i++){
        printf("Pole [%d] = %.2f\n", i, pole[i]);
    }
}

void round_items(float *pole){
    for(int i = 0; i < 10; i++){
        pole[i] = roundf(pole[i] * 10) / 10;
    }
}