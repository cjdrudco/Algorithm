#include <stdio.h>
int n = 8;
int sorted[8] = {0};

void Merge(int arr[], int s,int mid,int e) {
    int i = s;
    int j = mid+1;
    int k = s;
    while (i<=mid && j <=e) {
        if (arr[i] < arr[j]) sorted[k++] = arr[i++];
        else sorted[k++] = arr[j++];
    }
    int m = (i > mid) ? j:i;
        
    for (int a = k; a<= e; a++){
        sorted[a] = arr[m++];
    }
    
    for (int i = s; i<= e; i++){
        arr[i] = sorted[i];
        }

}


void MergeSort(int arr[],int s,int e) {
    int mid = (s+e)/2;
    if(s < e) {
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,e);
        Merge(arr,s,mid,e);
    }
}




int main()
{
    int arr[8] = {8, 2, 5, 7, 3, 1, 6, 4};
    MergeSort(arr,0, 7);
    for (int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }
}
