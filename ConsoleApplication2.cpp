

#include <iostream>
using namespace std;
struct Node {
    Node(int value) {
        Value = value;
    }

    int Value;
    Node* next=0;
};


class List {

private:

    Node* head;
    Node* last() {
        if (head == nullptr) return nullptr;
        Node* current = head;
        {

            while (current->next != nullptr)
                current = current->next;
        }
        return current;


    }


public:

    List() {

        head = nullptr;
    }

    void push_back(int value)
    {
        if (head == nullptr) {
            head = new Node(value);
            return;
        }

        Node* lastNode = last();
        if (lastNode != nullptr) {
            lastNode->next = new Node(value);

        }
    }


    size_t size() {

    }


    void print() {
        
        Node* asd;
        asd = head;
        {
            while (asd != nullptr)
                
            {
               
                std::cout << asd->Value << " ";

                asd = asd->next;
            }
        }
        
        


    }
};
int main()
{

    
        List list;
        list.print();
        list.push_back(3);
        list.push_back(1);
        list.push_back(6);
        list.push_back(9);
        list.print();

        return 0;
    

   

}

