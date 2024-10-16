//Edgar Añorve Nagaña
//24/09/2024
#include <iostream>

using namespace std;
struct Node {
    int data;
    Node* next;
};

void addNode(Node* &head, int value) {
    Node* newNode = new Node(); //crear un nuevo nodo en memoria
    newNode -> data = value; //asignacion de value a al estructura aceediendo a data
    newNode -> next = nullptr; //el siguiente nodo es  nullptr

    if (head == nullptr) {
        head = newNode; //si la lista esta vacia el nuevo nodo es la head
    }
    else {
        Node* temp = head; //crear una variable temporal que almacene el current head
        //recorremos lña lista hasta el ultimo nodo
        while(temp-> next != nullptr) {
            temp=temp->next;
        }
        temp->next=newNode;// enlazamos
    }
}

void showList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data <<"->";
        temp= temp -> next;
    }
}

int main()
{
    Node* list = nullptr;
    addNode(list, 40);
    addNode(list, 15);
    addNode(list, 490);

    cout <<"lista de valores: "<< endl;
    showList(list);




    return 0;
}
