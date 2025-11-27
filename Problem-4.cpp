#include <iostream>
#include <vector>
#include <map>
using namespace std;

class MultipleCounter {
public:
    void countMultiples(const vector<int>& arr) {
        map<int, int> result;

        // initialize map with keys 1 to 9
        for (int i = 1; i <= 9; i++)
            result[i] = 0;

        // count multiples
        for (int num : arr) {
            for (int i = 1; i <= 9; i++) {
                if (num % i == 0)
                    result[i]++;
            }
        }

        // display result
        cout << "{";
        for (int i = 1; i <= 9; i++) {
            cout << i << ": " << result[i];
            if (i < 9) cout << ", ";
        }
        cout << "}";
    }
};

int main() {
    vector<int> arr = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the Element of Array by single space: ";
    for(int i=0;i<n;i++) cin>>vec[i];
    MultipleCounter mc;
    mc.countMultiples(vec);

    return 0;
}
