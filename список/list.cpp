#include <iostream>
#include <string>
using namespace std;

template<typename T>
class List {
public:
    List();
    ~List();

    void push_back(T data);
    int GetSize() {return size;}
    T& operator[](const int index);
private:
 
    template<typename T2>
    class Node {
    public:
        Node *pNext;
        T2 data;

        Node(T2 data = T2(), Node *pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };

    int size;
    Node<T> *head;
};

template<typename T>
List<T>::List() {
    size = 0;
    head = nullptr;
}
template<typename T>
List<T>::~List() {}

template<typename T>
void List<T>::push_back(T data) {
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

    size++;
}

template<typename T>
T& List<T>::operator[](const int index) {
    int counter = 0;
    Node<T> *current = this->head;

    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }
}

int main() {
    List<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);
   

    for (int i = 0; i < lst.GetSize(); i++) {
       cout << lst[i] << " ";
    }
    return 0;
}