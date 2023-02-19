//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_BREADTHFIRST_H
#define NOTER_CORE_BREADTHFIRST_H

#include <filesystem>
#include "../TreeNode.h"

namespace ntr::fs::BreadthFirst {
    using Tree = TreeNode<std::filesystem::directory_entry>;

    Tree expand(const Tree &tree);
}

#endif //NOTER_CORE_BREADTHFIRST_H
