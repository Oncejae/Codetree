#include <iostream>

int main() {
 
    int cnt =0;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if((i%4 ==0) && (i%100!=0)){
            cnt++;
        }
        if (i%400 ==0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}