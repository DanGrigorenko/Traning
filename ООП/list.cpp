#include <iostream>
#include <time.h>
using namespace std;

template<typename T>
class List {
public: 
    List();
    ~List();

    void push(T data);
    int GetSize() {
        return Size;
    }
    void print();
private:
    template<typename T>
    class Node {
    public:
        Node* pNext;
        T data;

        Node (T data=T(), Node* pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };

    int Size;
    Node<T> *head;
};

template<typename T>
List<T>::List() {
    Size = 0;
    head = nullptr;
}

template<typename T>
List<T>::~List() {}

template<typename T>
void List<T>::push(T data) {
    if (head == nullptr) {
        head = new Node<T>(data);
    }
    else {
        Node<T> *current = this->head;

        while (current->pNext != nullptr) {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }
    Size++;
}

template<typename T>
void List<T>::print() {
    Node<T> *zalupa = head;
    while (zalupa) {
        cout << zalupa->data << endl;
    }
}

int main() 
{
    List<int> lst;
    lst.push(5);
    lst.push(10);
    lst.push(22);

    lst.print();
    return 0;
   
}