#include <iostream>
using namespace std;
bool bfs(int arr[][100], int src, int dest, int n, bool visited[])
{
    visited[src] = true;
    int queue[100];
    int rear = -1;
    int front = -1;
    queue[++rear] = src;
    while (rear != front)
    {
        int x = queue[++front];
        if (x == dest)
        {
            /* code */
            return true;
        }
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && arr[x][i] == 1)
            {
                visited[i] = true;
                queue[++rear] = i;
            }
        }
    }

    return false;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }
    int src, dest;
    cin >> src >> dest;
    bool visited[n];
    if (bfs(arr, src, dest, n, visited))
    {
        cout << "Path exists" << endl;
    }
    else
    {
        cout << "Path does not exist" << endl;
    }
    

    return 0;
}
