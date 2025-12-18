#include <stdio.h>
int fact(int n){
    int sum;
    if (n==0){
        return 1;
    } else {
       sum = n * fact(n-1);
    }
    return sum;
}
int main(void) {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d",fact(n));
    
    return 0;
}