#include <stdio.h>
int fact(int n){
    if (n==0){
        return 1;
    } else {
       n = n * fact(n-1);
    }
    return n;
}
int main(void) {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d",fact(n));
    
    return 0;
}