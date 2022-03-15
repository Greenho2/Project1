#include "Block.h"
#include "sha256.h"
#include <sstream>  

Block::Block(uint32_t nIndexIn, const string& sDataIn) : Index(nIndexIn), Data(sDataIn) {
    Nonce = -1;
    Time = time(nullptr);
}

string Block::GetHash() {
    return Hash;
}


void Block::MineBlock(const uint32_t Difficulty) {
    uint32_t curr = Difficulty+1;
    string cstr;
    for (uint32_t i = 0; i < Difficulty; ++i) {
        
        cstr.push_back('0');
    }
  

    string str(cstr);
    cout << "str is" << str << endl;
    do {
        Nonce++;
        Hash = CalculateHash();

    } while (Hash.substr(0, Difficulty) != str);

    cout << "Block mined: " << Hash << endl;
}

inline string Block::CalculateHash() const {
    stringstream ss;
    ss << Index << Time << Data << Nonce << PrevHash;
    
    return sha256(ss.str());
}
