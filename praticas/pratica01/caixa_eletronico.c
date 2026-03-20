#include <stdio.h>

float saque(float valor) {
    if valor > 1000.0 {
        return -1
    }

}
int main()
{
    saque(200);
    saque(100);
    saque(50);
    saque(20);
    saque(10);
    saque(5);
    saque(2);

    return 0;
}
