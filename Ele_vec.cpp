#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 10, 30, 10, 40};

    int count = std::count(v.begin(), v.end(), 10);

    cout << "10 occurs " << count << " times";

    return 0;
}
