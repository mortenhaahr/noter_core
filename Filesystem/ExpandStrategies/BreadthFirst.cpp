//
// Created by morten on 2/17/23.
//

#include "BreadthFirst.h"
#include <iostream>


namespace ntr::fs::BreadthFirst {
    Tree expand(const Tree &tree) {
        auto tc = tree.children.transient();
        for (const auto &entry: std::filesystem::directory_iterator(tree.data)) {
            auto t = Tree{entry};
            tc.push_back(t);
        }
        return Tree{tree.data, tc.persistent()};
    }
}