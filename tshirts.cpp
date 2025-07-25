#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms <= 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms <= 42) {
        sizeName = 'M';
    } else if(cms > 42 && cms <= 46) {
        sizeName = 'L';
    }
    else{
        sizeName = 'X';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(42) == 'M');
    assert(size(38) == 'S');
    assert(size(43) == 'L');
    aeert(size(48) == 'X');
    std::cout << "All is well (maybe!)\n";
}
