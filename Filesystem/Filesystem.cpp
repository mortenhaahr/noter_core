//
// Created by morten on 2/17/23.
//

#include <algorithm>
#include "Filesystem.h"

namespace ntr::fs::Filesystem {
    Tree expand(const Tree &tree, const std::function<Tree(const Tree &)> &strategy) {
        return strategy(tree);
    }

    Tree from_path(const std::filesystem::path &path) {
        return {std::filesystem::directory_entry{path}, {}};
    }

    Tree join(const Tree& root, const immer::vector<Tree>& leafs) {
        // TODO: Test that single instances of every leaf is in root
        auto rt = root.children.transient();
        // TODO: Implement (probably through recursion)
    }
}