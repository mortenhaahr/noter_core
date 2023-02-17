//
// Created by morten on 2/17/23.
//

#ifndef NOTER_CORE_DEPTHFIRST_H
#define NOTER_CORE_DEPTHFIRST_H

#include "ExpandStrategy.h"

namespace ntr::fs {
    class DepthFirst : public ExpandStrategy {
        void expand(Tree &from) override;
    };
}


#endif //NOTER_CORE_DEPTHFIRST_H
