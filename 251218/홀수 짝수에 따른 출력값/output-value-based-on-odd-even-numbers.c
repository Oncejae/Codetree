#include <stdio.h>
int div(int n){
    if(n==1 || n==2){
        return n;
    } else {
        n = n + div(n-2);
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d", div(n));
    return 0;
}