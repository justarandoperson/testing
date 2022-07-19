#include <iostream>
#include <Windows.h>

int main()
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "Greatest programm you have ever seen!\n";
    for (int i = 0;;i++) {
        SetConsoleTextAttribute(out, i);
        std::cout << "Text\n";
        if (i == 255) {
            i = 0;
        }
    }
}
