#pragma once
#include <cstdint>
#include <iostream>

using namespace std;

class Block {
public:
    string PrevHash;

    Block(uint32_t IndexIn, const string& DataIn);

    string GetHash();

    void MineBlock(const uint32_t Difficulty);

private:
    uint32_t Index;
    int64_t Nonce;
    string Data;
    string Hash;
    time_t Time;

    string CalculateHash() const;
};
