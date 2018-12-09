#include "grammar/grammar.h"
#include "gtest/gtest.h"

int unitteest(int argc, char **argv);

void dir_build();

int main(int argc, char **argv) {

#ifdef __UNITTEST__
    unitteest(argc, argv);
#endif
#ifdef __DIR_BUILD__
    dir_build();
#endif
    return 0;
}

int unitteest(int argc, char **argv) {
    printf("Running unitteest() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

void dir_build() {

}