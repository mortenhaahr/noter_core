//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_FILESYSTEM_H
#define NOTER_CORE_FILESYSTEM_H

#include <filesystem>
#include <list>
#include "ExpandStrategies/ExpandStrategy.h"

namespace ntr::fs {
    class Filesystem {
    public:
        using Tree = TreeNode<std::filesystem::directory_entry>;

        Filesystem(std::filesystem::path start_path, ExpandStrategy* strat);
        void expand();

    private:
        ExpandStrategy* strat_;
        std::filesystem::path start_path_;
        Tree in_memory_{};

    };
}


#endif //NOTER_CORE_FILESYSTEM_H
