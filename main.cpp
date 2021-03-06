#include <iostream>
#include "counter.h"

using namespace std;

int main() {
    counter c1;
    counter c2(99);
    countDown c3(10);
    cout << "C1 Count is: " << c1.getCount() << endl;
    cout << "C2 Count is: " << c2.getCount() << endl;
    ++c2;
    cout << "C2 Count is: " << c2.getCount() << endl;

    ++c3;
    ++c3;
    --c3;
    cout << "C3 Count is: " << c3.getCount() << endl;
    return 0;
}