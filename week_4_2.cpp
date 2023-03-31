#include<time.h>
#include <bits/stdc++.h>
using namespace std;


int merge(int arr[], int temp[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = 0;
    int inversions = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += mid - i + 1;
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= end) {
        temp[k++] = arr[j++];
    }
    for (i = start, j = 0; i <= end; i++, j++) {
        arr[i] = temp[j];
    }
    return inversions;
}

int mergeSort(int arr[], int temp[], int start, int end) {
    int comparisons = 0, inversions = 0;
    if (start < end) {
        int mid = start + (end - start) / 2;
        comparisons += mergeSort(arr, temp, start, mid);
        comparisons += mergeSort(arr, temp, mid + 1, end);
        inversions += merge(arr, temp, start, mid, end);
    }
    return comparisons + inversions;
}

int main() {
    int t;
    clock_t start,end;
    double time;
    cin >> t;
    while (t--) {
        int n=1000;
        int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() %(n*10)) + 1;
        cout << arr[i] << endl;
    }
        start = clock();
        int comparisons = mergeSort(arr, temp, 0, n - 1);
        end = clock();
        time = ((double)(end-start))/CLOCKS_PER_SEC *1000;
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Comparisons: " << comparisons << endl;
        cout << "Inversions: " << comparisons - n + 1 << endl;
    }
    cout << "time : " << time;
    return 0;
}
