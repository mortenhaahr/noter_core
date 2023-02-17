//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_TREENODE_H
#define NOTER_CORE_TREENODE_H

#include <vector>

namespace ntr::fs {
    template<typename T>
    struct TreeNode {
        T data;
        std::vector<TreeNode<T>> children;
    };
}


#endif //NOTER_CORE_TREENODE_H
