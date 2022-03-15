#pragma once
#include <cstdint>
#include <vector>
#include "Block.h"
#include "Account.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block newBlock, Account* user);

    long unsigned int curBlock;

private:
    
    uint32_t Difficulty;
    vector<Block> Chain;

    Block GetLastBlock() const;
};