//
// Created by morten on 2/17/23.
//

#include "Filesystem.h"

#include <utility>


ntr::fs::Filesystem::Filesystem(std::filesystem::path start_path, ntr::fs::ExpandStrategy *strat) : start_path_{std::move(start_path)}, strat_{strat}{
    in_memory_ = {std::filesystem::directory_entry{start_path_}, {}};
    expand();
}

void ntr::fs::Filesystem::expand() {
    strat_->expand(in_memory_);
}
