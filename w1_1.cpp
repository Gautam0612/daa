// I. Given an array of nonnegative integers, design a linear algorithm and implement it using a program
// to find whether given key element is present in the array or not. Also, find total number of
// comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int comp = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (key == arr[i])
            {
                comp++;
                flag++;
                break;
            }
            else
                comp++;
        }
        if (flag)
        {
            cout << "PResent" << endl;
        }
        else
            cout << "not Present" << endl;

        cout << comp;
    }

    return 0;
}
