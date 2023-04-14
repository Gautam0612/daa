// n*n
#include <iostream>
#include <vector>
using namespace std;
class ins
{
public:
    vector<int> v;
    int n;
    void print()
    {
        for (auto x : v)
            cout << x << endl;
        ;
    }
    void insertion()
    {
        int j;
        for (int i = 1; i < n; i++)
        {
            int c = v[i];
            j = i - 1;
            while (j >= 0 && v[j] > c)
            {
                v[j + 1] = v[j];
                j= j-1;
            }
            v[j+1] = c;
        }
    }
};
int main(int argc, char const *argv[])
{
    ins obj = ins();
    cin >> obj.n;
    for (int i = 0; i < obj.n; i++)
    {
        int c;
        cin >> c;
        obj.v.push_back(c);
    }
    obj.insertion();obj.print();
    return 0;
}
