//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_TREENODE_H
#define NOTER_CORE_TREENODE_H

#include <vector>
#include <filesystem>
#include "immer/vector.hpp"
#include "immer/vector_transient.hpp"
#include "immer/box.hpp"

namespace ntr::fs {
    template<typename T>
    struct TreeNode {
        const T data = {};
        // NOTE: Should probably be a set but can't get it to work..
        const immer::vector<immer::box<TreeNode>> children = {};

        constexpr bool operator==(const TreeNode<T> &rhs) const {
            return (data == rhs.data)
                   && (children == children);
        }

        template<typename T2>
        constexpr bool operator==(const TreeNode<T2> &rhs) const {
            return false;
        }
    };
}


#endif //NOTER_CORE_TREENODE_H
