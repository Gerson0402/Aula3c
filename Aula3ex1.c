// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x = 15;
    int y = 10;
    
    // Write C code here
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    if(x == y) {
        printf("x igual a y");
    }
    if(x != y) {
        printf("x diferente de y");
    }
    
    
    return 0;
}