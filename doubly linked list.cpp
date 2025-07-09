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
