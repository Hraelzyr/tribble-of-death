#include "syscall.h"

#define MAX_LENGTH 20
#define MAX_STUDENT 5

int main() {
    int child = Exec("ascii");
    Sleep(1e10);
    PrintString("Soyuz nerushimy");
    Join(child);
    return 0;
}
