#include <iostream>
#include <set>
using namespace std;
int32_t main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << s.size() << "\n";
    s.erase(2);
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}