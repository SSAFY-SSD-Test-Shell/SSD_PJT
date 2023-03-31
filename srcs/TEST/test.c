#include "../../includes/testShell.h"

void testapp1() {
    fullwrite(1);
    fullread();
}

void testapp2() {
    for(int i=0;i<30;i++)
        writeSSD(1, "0xAAAABBBB");
    writeSSD(1, "0x12345678");
    readSSD(1);
}