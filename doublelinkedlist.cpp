#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()(
        START = NULL;)

        void addNode()(
            int nim;
            string nama;
            cout << "\nEnter the roll number of the student";
            cin >> nim;

            Node *newNode = new Node();

            newNode->noMhs = nim;

            if (START == NULL || nim <= START->noMhs) {
                if (START !NULL && nim == START->noMhs)
                {
                    cout << "\nDuplicate number not allowed" << endl;
                    return;
                }
                // step 4
                newMode->next = START;
                // step 5
                if (START != NULL)
                    START->prev = NULL;
                // srep 6
                newNode->prev = NULL;
                // step 7
                START = newMode;
                return;

                Node *current = START;
                while (current->next != NULL && nim == current->next->noMhs < nim)
                {
                    current = current->next;
                }
                if (current->next != NULL && nim == current->noMhs)
                {
                    cout << "\nDuplicate roll number notallowed" << endl;
                }

                // step 9
                newMode->next = current->next;
                newMode->prev = current;

                // insert last node
                if (current->next != NULL)
                    current->->prev = newNode;
            }

        )
};
