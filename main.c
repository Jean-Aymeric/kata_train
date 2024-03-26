#include <stdio.h>
#include "wagon.h"

int main() {
    Wagon *myWagon = createEmptyWagon();
    displayWagon(myWagon);
    addStuff(myWagon,'#');
    displayWagon(myWagon);
    printf("%c", '\n');
    addStuff(myWagon,'@');
    displayWagon(myWagon);
    printf("%c", '\n');
    addStuff(myWagon,'H');
    displayWagon(myWagon);
    printf("%c", '\n');
    addStuff(myWagon,'B');
    displayWagon(myWagon);
    printf("%c", '\n');
    addStuff(myWagon,6);
    displayWagon(myWagon);
    printf("%c", '\n');
    deleteWagon(&myWagon);
    return 0;
}
