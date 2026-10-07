#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 10, 30, 20, 40};

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "After removing duplicates: ";

    for (int x : v)
        cout << x << " ";

    return 0;
}
