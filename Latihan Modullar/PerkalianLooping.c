#include <stdio.h>

long long int multiply(long int multiplied, long int multiplier) {
    long long int i;
    long long int res;

    res = 0;
    for (i = 0; i < multiplier; i++) {
        res += multiplied;
    }

    return res;
}

int main() {
    // DECLARATION
    long long int num1, num2;                     // inputting variable
    long long int result;                         // output variable

    // INPUT 
    scanf("%lld %lld", &num1, &num2);

    // PROCESS
    result = multiply(num1, num2);

    // OUTPUT 
    printf("%lld\n", result);

    return 0;
}