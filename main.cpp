#include <iostream>
#include "treeReal.h"

using namespace std;

int main()
{
    adrNode root = nil;

    // Insert nodes ke dalam BST
    int nodes[] = {8, 9, 12, 13, 15, 17, 7, 6, 4};
    for (int i = 0; i < 9; ++i) {
        adrNode newNodePtr = newNode_103012300012(nodes[i]);
        insertNode_103012300012(root, newNodePtr);
    }

    // Hapus node satu per satu dan cetak hasilnya
    for (int i = 0; i < 9; ++i) {
        printInOrder_103012300012(root);
        cout << endl;
        adrNode nodeToDel = newNode_103012300012(nodes[i]);
        DeleteNode_103012300012(root, nodeToDel);
    }
    return 0;
}
