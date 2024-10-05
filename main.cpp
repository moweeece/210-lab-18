// COMSC-210 | Lab 18 | Mauricio Espinosa
// IDE Used: Visual Studio Code & Github

#include <iostream>
#include <string>
using namespace std;

struct Node
{
    float rating;
    string comment;
    Node *next;
};

class LinkedList
{
    private:
    Node *head;

    public:
    // constructor
    LinkedList();

    // function delcarations
    void addNodeToHead();
    void addNodeToTail();
    void display();

    // destructor
    ~LinkedList();

};

int main() {

    LinkedList reviewsList;
    int userChoice;
    char anotherReview;

    cout << "Which linked list method should we use" << endl;
    cout << "/t [1] New nodes are added at the head of the linked list" << endl;
    cout << "/t [2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";
    cin >> userChoice;
    cout << endl;

    // do while loop for inputting while user says Y or y
    do {
        float rating;
        string comment;

        cout << "Enter review rating 0-5: ";
        cin >> rating;
        cin.ignore();
        cout << "Enter review comment: ";
        getline (cin, comment);

        if (userChoice == 1)
        {
            reviewsList.addNodeToHead();
        }
        else if (userChoice == 2)
        {
            reviewsList.addNodeToTail();
        }

        cout << "Enter another review? Y/N: ";
        cin >> anotherReview;
    } while (anotherReview == 'Y' || anotherReview == 'y');

    cout << "Outputting all reviews: " << endl;
    reviewsList.display();

    return 0;
}


// function definitions
//void addNodeToHead();


//void addNodeToTail();


//void display();
