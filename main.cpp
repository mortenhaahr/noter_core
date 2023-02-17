#include "Filesystem/Filesystem.h"
#include "Filesystem/ExpandStrategies/DepthFirst.h"

int main(){
    using namespace ntr;
    using namespace fs;
    ExpandStrategy* df = new DepthFirst{};
    Filesystem f{"/home/morten/.config/noter", df};
}