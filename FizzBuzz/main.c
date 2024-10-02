#include <stdio.h>
#include <stdlib.h>

void FizzBuzz(){
    for (int i = 0; i < 100; ++i) {
        if(i % 15 == 0){
            printf("%s\n", "FIZZBUZZ");
        }
        else if (i % 5 == 0) {
            printf("%s\n", "FIZZ");
        }
        else if (i % 3 == 0) {
            printf("%s\n", "BUZZ");
        }
    }
}

int main() {
    FizzBuzz();
    return 0;
}
