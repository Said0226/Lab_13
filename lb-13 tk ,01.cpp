#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int per_id;
    string per_name;
    int per_age;

public:

    Person(int id = 0, string name = "", int age = 0)
        : per_id(id), per_name(name), per_age(age) {}

    // Input function
    void input() {
        cout << "Enter Person ID: ";
        cin >> per_id;
        cout << "Enter Person Name: ";
        cin.ignore();
        getline(cin, per_name);
        cout << "Enter Person Age: ";
        cin >> per_age;
    }

    void output() const {
        cout << "ID: " << per_id << ", Name: " << per_name << ", Age: " << per_age << endl;
    }
};


class LinkedList {
private:
    struct Node {
        Person person;
        Node* next;
        Node(const Person& p) : person(p), next(NULL) {}
    };

    Node* head;

public:
    LinkedList() : head(NULL) {}

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    
    void insertAtHead(const Person& p) {
        Node* newNode = new Node(p);
        newNode->next = head;
        head = newNode;
    }

    void display() const {
        Node* current = head;
        while (current) {
            current->person.output();
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;
    int choice;

    do {
        cout << "\n1. Add Person\n2. Display All Persons\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Person p;
                p.input();
                list.insertAtHead(p);
                break;
            }
            case 2:
                list.display();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

