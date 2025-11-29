#include <stdio.h>

int main() {
    int a[10];
    int sum=0;
    int b;
    float avg;
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
        if(a[i]<250){
            sum += a[i];
        }
        if(a[i]>=250){
            b = i;
            break;
        }
        b= i;
    }
    avg = (float)sum / b;
    printf("%d %.1f", sum, avg);    

    return 0;
}