#include <stdio.h>

int main() {
    int a[10];
    int sum=0;
    int count =0;
    float avg;
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
        if(a[i]<250){
            sum += a[i];
            count++;
        }
        if(a[i]>=250){
            break;
        }
    }
    avg = (float)sum / count;
    printf("%d %.1f", sum, avg);    

    return 0;
}