#include <iostream>

int len(const char* s) {
    int length = 0;
    while (*s) {
        length++;
        s++;
    }
    return length;
}

int compare(const char* s, const char* t) {
    while (*s && *t) {
        if (*s != *t) {
            return *s - *t;
        }
        s++;
        t++;
    }
    return *s - *t;
}

int main() {
    const char* s = "hello";
    const char* t = "world";

    std::cout << "dlina s: " << len(s) << std::endl;
    std::cout << "dlina t: " << len(t) << std::endl;

    int result = compare(s, t);
    if (result > 0) {
        std::cout << "s > t" << std::endl;
    }
    else if (result < 0) {
        std::cout << "s < t" << std::endl;
    }
    else {
        std::cout << "s == t" << std::endl;
    }

    return 0;
}