#include "Blockchain.h"
#include "Account.h"
#pragma warning(disable: 4996);

int main() {
    Blockchain bChain = Blockchain();

    
    Account* greenho2 = new Account("adjfakf");
    cout << "Mining block:" <<bChain.curBlock<< endl;
    bChain.AddBlock(Block(bChain.curBlock, "Block 1 Data"), greenho2);
    
    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(bChain.curBlock, "Block 2 Data"), greenho2);

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(bChain.curBlock, "Block 3 Data"), greenho2);
    cout << greenho2->value;

    return 0;
}