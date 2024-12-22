#include <iostream>
#include "treeReal.h"

using namespace std;

adrNode newNode_103012300012(infotype x) {
    adrNode p = new ElmTree;
    info(p) = x;
    right(p) = nil;
    left(p) = nil;

    return p;
}

void insertNode_103012300012(adrNode &root, adrNode p) {
    if (root == nil) {
        root = p;
    } else if (info(p) < info(root)) {
        insertNode_103012300012(left(root), p);
    } else {
        insertNode_103012300012(right(root), p);
    }
}

void DeleteNode_103012300012(adrNode &root, adrNode &p){
    if (root == nil) return;

    if (info(p) < info(root)) {
        DeleteNode_103012300012(left(root), p);
    } else if (info(p) > info(root)) {
        DeleteNode_103012300012(right(root), p);
    } else {
        if (left(root) == nil && right(root) == nil) {
            root = nil;
        } else if (right(root) == nil) {
            adrNode temp = root;
            root = left(root);
            temp = nil;
        } else {
            adrNode newRoot = findMin_103012300012(right(root));
            info(root) = info(newRoot);
            DeleteNode_103012300012(right(root), newRoot);
        }
    }
}

adrNode findMin_103012300012(adrNode root) {
    while (left(root) != nil) {
        root = left(root);
    }

    return root;
}

void printInOrder_103012300012(adrNode root) {
    if (root != nil) {
        printInOrder_103012300012(left(root));
        cout << info(root) << " ";
        printInOrder_103012300012(right(root));
    }
}
