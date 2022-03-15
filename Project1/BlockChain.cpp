#include "Blockchain.h"

Blockchain::Blockchain() {
    Chain.emplace_back(Block(0, "Genesis Block"));
    Difficulty = 1;
    curBlock = 1;
}


void Blockchain::AddBlock(Block newBlock, Account* user) {
    curBlock++;
    newBlock.PrevHash = GetLastBlock().GetHash();
    newBlock.MineBlock(Difficulty);
    Chain.push_back(newBlock);
    cout<<"Deposited"<<user->deposit(50)<<endl;
}

Block Blockchain::GetLastBlock() const {
    return Chain.back();
}
