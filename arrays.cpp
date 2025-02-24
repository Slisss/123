#include <iostream>

void rotate(int a[], int n, bool clockwise = false) {
    if (!clockwise) {
        int x = a[0];

        for (int i = 1; i < n; i++) {
            a[i - 1] = a[i];
        }

        a[n - 1] = x;
    }
    else {
        int x = a[n - 1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = x;
    }
}

int main() {
    int a[5]{ 1, 2, 3, 4, 5 };

    // против часовой
    rotate(a, 5);
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    // по часовой
    rotate(a, 5, true);
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}