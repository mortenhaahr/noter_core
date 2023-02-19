#include "Filesystem/Filesystem.h"
#include "Filesystem/ExpandStrategies/BreadthFirst.h"
#include <iostream>

int main(){
    using namespace ntr;
    using namespace fs;

    const auto bf = [](auto t){return BreadthFirst::expand(t);};
    auto tree0 = Filesystem::from_path("..");
    auto tree1 = Filesystem::expand(tree0, bf);
    auto tree2 = Filesystem::expand(tree1, bf);
    assert(tree1 == tree2);
    auto x = 2;

}