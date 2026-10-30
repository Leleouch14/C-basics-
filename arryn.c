#include <stdio.h>

int main() {
    int n;
    printf("enter the size of your array: ");
    scanf("%d", &n);
    int arr[n];

    //input
    for(int i =0; i<n; i++){
        int q;
        printf("enter the value: ");
        scanf("%d", &q);
        arr[i] = q;
    }
    //sort: bubble
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //median
    if(n % 2 == 0){
        float med1 = arr[n/2];
        float med2 = arr[(n/2) - 1];
        float median;
        median = (med1 + med2)/2;
        printf("%f", median);  //here we use %f as median is float
    } else{
        int p = (n - 1) / 2;
        int median;
        median = arr[p];
        printf("%d", median);
    }
    return 0;
}