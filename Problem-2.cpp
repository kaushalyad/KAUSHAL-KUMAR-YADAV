#include <iostream>
using namespace std;

class SeriesGenerator {
public:
    void generate(int a) {
        int num = 1;  // first odd number
        for (int i = 0; i < a; i++) {
            cout << num;
            if (i < a - 1) cout << ", ";
            num += 2;  // next odd number
        }
    }
};

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    SeriesGenerator sg;
    sg.generate(a);

    return 0;
}
