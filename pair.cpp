#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    // pair <int,char> p;
    // p.first=3;
    // p.second='f';
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        // pair<int,int> p;
        // p.first=arr[i];
        // p.second=i;
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; v.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//error