#ifndef TREEREAL_H_INCLUDED
#define TREEREAL_H_INCLUDED
#include <iostream>
#define root(t) t.root
#define info(t) t->info
#define right(t) t->right
#define left(t) t->left
#define nil NULL

using namespace std;

typedef int infotype;
typedef struct ElmTree *adrNode;
struct ElmTree {
    infotype info;
    adrNode right;
    adrNode left;
};

adrNode newNode_103012300012(infotype x);
/* mengembalikan alamat dari suatu node hasil
alokasi, dengan info adalah x
dan left dan right adalah NULL */
void insertNode_103012300012(adrNode &root, adrNode p);
/* I.S. terdefinisi root dari BST (mungkin NULL),
dan pointer p yang berisi
alamat node yang mau ditambahkan pada BST
F.S. elemen yang ditunjuk oleh p ditambahkan
sebagai node dari BST
Catatan: implementasikan secara REKURSIF */
void DeleteNode_103012300012(adrNode &root, adrNode &p);
/* I.S. Terdefinisi root dari BST (mungkin NULL)
dan pointer p yang menunjuk
alamat node yang akan dihapus dari BST. Node p
dipastikan berada di dalam BST.
F.S. Node yang ditunjuk oleh p dihapus dari BST.
Struktur BST tetap terjaga,
dengan menggantikan node yang dihapus sesuai
aturan BST:
- Jika node yang dihapus adalah daun, langsung
dihapus.
- Jika node memiliki satu anak, anak tersebut
menggantikan node yang dihapus.
- Jika node memiliki dua anak, elemen pengganti
diambil dari node dengan nilai
terbesar di subtree kiri atau nilai terkecil di
subtree kanan. */
void printInOrder_103012300012(adrNode root);
/* I.S. Terdefinisi root dari BST (mungkin NULL).
F.S. Semua elemen BST dicetak secara in-order
(urut dari terkecil ke terbesar). */
adrNode findMin_103012300012(adrNode root);
/* I.S. Terdefinisi root dari BST (tidak NULL).
F.S. Mengembalikan pointer ke node dengan nilai
terkecil pada subtree dengan root tersebut.
Catatan: Tidak ada perubahan pada struktur BST. */


#endif // TREEREAL_H_INCLUDED
