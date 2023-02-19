//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_FILESYSTEM_H
#define NOTER_CORE_FILESYSTEM_H

#include <filesystem>
#include <list>
#include <functional>
#include "TreeNode.h"


namespace ntr::fs::Filesystem {
    using Tree = TreeNode<std::filesystem::directory_entry>;

    Tree expand(const Tree &tree, const std::function<Tree(const Tree &)> &strategy);

    Tree from_path(const std::filesystem::path &path);

    Tree join(const Tree& root, const immer::vector<Tree>& leafs);
}


#endif //NOTER_CORE_FILESYSTEM_H
