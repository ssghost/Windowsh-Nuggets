#include <windows.h>
#include <iostream>

BOOL WINAPI DllMake(HINSTANCE h, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        std::cout << "Hello world from DLL.\n";
    }
    return TRUE;
}

void Loader() {
    LoadLibraryA("dllmake.dll");
}
