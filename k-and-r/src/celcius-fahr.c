#include <stdio.h>

/*Exercise 1-4*/
/*
f = (9c + 160) / 5

*/
int main() {
    int upper = 300;
    int step = 20;
    float fahr;
    float celcius = 0;

    while (celcius <= upper) {
        fahr = (9.0 * celcius + 160) / 5;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius += step;
    }

    return 0;
}