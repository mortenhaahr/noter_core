//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_EXPANDSTRATEGY_H
#define NOTER_CORE_EXPANDSTRATEGY_H

#include <list>
#include <filesystem>
#include "../TreeNode.h"

namespace ntr::fs {
    class ExpandStrategy {
    public:
        using Tree = TreeNode<std::filesystem::directory_entry>;
        virtual void expand(Tree &from) = 0;
    };
}

#endif //NOTER_CORE_EXPANDSTRATEGY_H
