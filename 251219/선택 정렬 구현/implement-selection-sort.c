#include <stdio.h>

int n;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min, temp;
    for (int i=0; i<n-1; i++){
        min = i; // 여기를 배열이 아닌 상수로 두고
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}