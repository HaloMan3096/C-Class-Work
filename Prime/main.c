#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int numb){
    if (numb == 0 || numb == 1){
        return true;
    }
    for (int i = 2; i < numb; ++i) {
        if(numb % i == 0){
            return false;
        } else {
            continue;
        }
    }
    return true;
}

bool isPrime(int numb){
    if (checkPrime(numb)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    for (int i = 0; i < 100; ++i) {
        printf("is %d Prime?: %s\n", i, isPrime(i) ? "true" : "false");
    }
    return 0;
}
