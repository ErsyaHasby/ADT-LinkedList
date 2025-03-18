#include <stdio.h>
#include "linked_list.h"

int main()
{
    address head;
    CreateNode(&head);

    printf("Menambahkan elemen ke dalam linked list...\n");
    AddAwal(&head, 10);
    AddAkhir(&head, 20);
    AddAkhir(&head, 30);
    AddTengah(&head, 25, 3);

    printf("Linked List setelah penambahan:\n");
    TampilList(head);

    printf("\nMencari node dengan nilai 20...\n");
    cariNode(head, 20);

    printf("\nMenghapus elemen pertama...\n");
    hapusNodeAwal(&head);
    TampilList(head);

    printf("\nMenghapus elemen terakhir...\n");
    hapusNodeAkhir(&head);
    TampilList(head);

    printf("\nMenghapus elemen di posisi ke-2...\n");
    hapusNode(&head, 2);
    TampilList(head);

    printf("\nJumlah total node: %d\n", jumtotNode(head));
    printf("Nilai maksimum di dalam linked list: %d\n", nodeMax(head));
    printf("Rata-rata nilai dalam linked list: %.2f\n", rata2Node(head));

    printf("\nMenukar node dalam linked list...\n");
    tukarNode(&head);
    TampilList(head);

    return 0;
}
