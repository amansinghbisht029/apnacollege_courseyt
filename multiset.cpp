#include <iostream>
#include <set>
using namespace std;
int32_t main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << s.size() << "\n";
    s.erase(s.find(3));
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}