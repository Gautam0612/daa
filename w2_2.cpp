// II. Given a sorted array of positive integers, design an algorithm and implement it using a program to
// find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        cout << "Enter the sorted array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] + arr[i + 1] == arr[i + 2])
            {
                cout << i << " " << i + 1 << " " << i + 2 << endl;
            }
        }
        }

        return 0;
    }
