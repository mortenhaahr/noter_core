//
// Created by morten on 2/17/23.
//

#include "DepthFirst.h"
#include <iostream>

using namespace ntr::fs;
using Tree = ExpandStrategy::Tree;

void DepthFirst::expand(Tree &from) {
    for (const auto &entry: std::filesystem::directory_iterator(from.data)){
        std::cout << entry.path() << std::endl;
//        if(entry != from.children[0]) {
//
//        }
        auto node = Tree{entry, {}};
        from.children.emplace_back(node);
    }
}
