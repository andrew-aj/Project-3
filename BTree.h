#pragma once

#include "Node.h"
#include "Defines.h"

#include <stack>

namespace Chess {

    class BTree {
    public:
        BTree();

        void insertHash(ZobristHash *pointer);

        void insertHash(hash Data, std::vector<NextMove> &bestWhite, std::vector<NextMove> &bestBlack);

        ZobristHash *findHash(hash Data);

        ZobristHash *findHash(hash Data, Node *node);

    private:
        Node *root;
    };

}
