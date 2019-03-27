#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node * ptrtonext;
    Node(int d) {
        data = d;
        ptrtonext = NULL;
    }
};
class Linkedlist {
public:
    Node * createlinkedlist(int numofnodes) {
        Node * head = NULL;
        Node * tail = NULL;
        int ctr = 0;
        while (ctr < numofnodes) {
            int d;
            cin >> d;
            Node * newnode = new Node(d);
            if (ctr == 0) {
                head = newnode;
                tail = newnode;
                ctr++;
            }
            else {
                tail -> ptrtonext = newnode;
                tail = newnode;
                ctr++;
            }
        }
        return head;
    }
    Node * deletefromlinkedlist(Node * head, int indexofnode) {
        if (indexofnode == 0) {
            head = head -> ptrtonext;
        }
        else {
            Node * curnode = head;
            for (int cidex = 1; cidex < indexofnode; cidex ++) {
                curnode = curnode -> ptrtonext;
            }
            curnode -> ptrtonext = (curnode -> ptrtonext)->ptrtonext;
        }
        return head;
    }
    void printlinkedlist(Node * head) {
        Node * curnode = head;
        while (curnode != NULL) {
            cout << curnode -> data << " ";
            curnode = curnode -> ptrtonext;
        }
    }
    Node * reverselinkedlist(Node * head) {
        Node * newhead;
        if (head -> ptrtonext == NULL) {
            newhead = head;
            return newhead;
        }
        newhead = reverselinkedlist(head -> ptrtonext);
        (head -> ptrtonext) -> ptrtonext = head;
        head -> ptrtonext = NULL;
        return newhead;
    }
};
int main () {
    int numofnodes;
    cin >> numofnodes;
    Linkedlist L;
    Node * head = L.createlinkedlist(numofnodes);
    head = L.reverselinkedlist(head);
    L.printlinkedlist(head);

}