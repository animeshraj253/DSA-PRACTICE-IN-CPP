#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<bool> prime = {1, 2, 3, 4, 5};
    
    for (const auto &i : prime) {
        cout << i << endl;
    }

    return 0;
}