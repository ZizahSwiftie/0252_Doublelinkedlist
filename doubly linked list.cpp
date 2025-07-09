#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

void buatNodeBaru(int data) 
{
    Node *baru = new Node;
    baru->data = data;
    baru->next = NULL;
    baru->prev = NULL;

    if (head == NULL) {
        head = baru;
        tail = baru;
    } else {
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
    }
}

void tambahDepan(int data) 
{
    Node *baru = new Node;
    baru->data = data;
    baru->next = NULL;
    baru->prev = NULL;

    if (head == NULL) {
        head = baru;
        tail = baru;
    } else {
        baru->next = head;
        head->prev = baru;
        head = baru;
    }
}

void tambahBelakang(int data) 
{
    Node *baru = new Node;
    baru->data = data;
    baru->next = NULL;
    baru->prev = NULL;

    if (head == NULL) {
        head = baru;
        tail = baru;
    } else {
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
    }
}

void tampil() 
{
    if (head == NULL) {
        cout << "List masih kosong!" << endl;
    } else {
        Node *bantu = head;
        while (bantu != NULL) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
}

void hapusDepan() 
{
    if (head == NULL) {
        cout << "List masih kosong!" << endl;
    } else {
        Node *hapus = head;
        if (head->next != NULL) {
            head = head->next;
            head->prev = NULL;
        } else {
            head = NULL;
            tail = NULL;
        }
        delete hapus;
    }
}

void hapusBelakang() 
{
    if (head == NULL) {
        cout << "List masih kosong!" << endl;
    } else {
        Node *hapus = tail;
        if (tail->prev != NULL) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            head = NULL;
            tail = NULL;
        }
        delete hapus;
    }
}

void clear() 
{
    while (head != NULL) {
        hapusBelakang();
    }
    cout << "Semua data berhasil dihapus" << endl;
}

int main() {
    int pilihan, data;

    do {
        cout << "\n=== MENU DOUBLY LINKED LIST ===" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Hapus Depan" << endl;
        cout << "4. Hapus Belakang" << endl;
        cout << "5. Tampilkan Data" << endl;
        cout << "6. Hapus Semua Data (Clear)" << endl;
        cout << "7. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;
}
