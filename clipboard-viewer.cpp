#include <windows.h>
#include <iostream>

int main() {
    if (!OpenClipboard(NULL)) {return 1;}

    HANDLE data = GetClipboardData(CF_TEXT);

    if (data == NULL) {CloseClipboard(); return 1;}

    std::cout<< "%s\n", data;

    return 0;
}