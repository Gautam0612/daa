#include <iostream>
using namespace std;
int binary(int low, int high, int key, int arr[], int &count)
{
    int mid;
    mid = (low + high) / 2;
    while (high >= low)
    {
        if (key == arr[mid])
        {
            ++count; // increment count for the mid element
            int c = mid - 1; // use a separate variable for left side
            int d = mid + 1; // use a separate variable for right side
            while (c >= low && arr[c] == key) // check if c is within bounds and equal to key
            {
                count++;
                c--;
            }
            while (d <= high && arr[d] == key) // check if d is within bounds and equal to key
            {
                count++;
                d++;
            }
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; // return -1 if key is not found
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int key;
        int arr[n];
        cout << "Enter the sorted array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> key;
        int count = 0; // initialize count to 0 outside the loop
        int index = binary(0, n - 1, key, arr, count); // use n - 1 as the high index
        if (index == -1) // check if key is not found
        {
            cout << "Key not present" << endl;
        }
        else
        {
            cout << "Key present at index " << index << endl;
            cout << "Number of copies: " << count << endl;
        }
    }
    return 0;
}
