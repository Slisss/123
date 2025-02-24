#include <iostream>
#include <cstring> 

void string_copy(char* d, char* s) {
    while (*s) {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0'; 
}

int main() {
    char str[] = "Hello!";
    std::cout << str << std::endl;

    std::cout << strlen(str) << ' ' << sizeof(str) << std::endl;

    char t[32];
    char* pd = t;
    char* ps = str;

    string_copy(t, str);

    std::cout << t << std::endl;

    return 0;
}