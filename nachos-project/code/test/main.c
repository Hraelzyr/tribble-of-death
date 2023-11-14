#include "syscall.h"

#define MAX_LENGTH 20
#define MAX_STUDENT 5

int main() {
    int child, child2, child3;
    
    child = Exec("ascii");
    child2 = Exec("ascii");
    child3 = Exec("ascii");
    
    PrintString("Child: ");
    PrintNum(child);
    PrintString("Child2: ");
    PrintNum(child2);
    PrintString("Child3: ");
    PrintNum(child3);
    
    Join(child);
    Join(child2);
    Join(child3);
    return 0;
}
