#include <stdio.h>

int n;
int num[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    int tmp;
    // Please write your code here.
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (num[j]>num[j+1]){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (num[j+1]>num[j]){
                tmp = num[j+1];
                num[j+1] = num[j];
                num[j] = tmp;
            }
        }
    }
     for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}