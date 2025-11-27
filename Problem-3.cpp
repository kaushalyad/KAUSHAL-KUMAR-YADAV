#include <iostream>
using namespace std;

class SeriesGenerator {
public:
    void generate(int a) {
        int n;
        if (a % 2 == 0) 
            n = a - 1;   
        else 
            n = a;      

        int num = 1;
        for (int i = 0; i < n; i++) {
            cout << num;
            if (i < n - 1) cout << ", ";
            num += 2;
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
