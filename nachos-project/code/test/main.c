#include "syscall.h"

#define MAX_LENGTH 20
#define MAX_STUDENT 5

int main() {
    int child;
    PrintString("Soyuz nerushimy");
    child = Fork();
    //Sleep(1e6);
    Join(child);
    return 0;
}
