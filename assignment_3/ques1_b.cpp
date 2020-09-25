#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *head;
Node *tail;

void insert(int x)
{
    Node *temp = new Node();
    Node *last_node = head;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        while (1)
        {
            if (last_node->next == NULL)
            {
                break;
            }
            last_node = last_node->next;
        }
        last_node->next = temp;
        temp->prev = last_node;
        last_node = temp;
        tail = last_node;
    }
}

void create_list()
{
    int n, x;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data: ";
        cin >> x;
        insert(x);
    }
    head->prev = tail;
    tail->next = head;
}

void insert_pos()
{
    int n,x;
    cout<<"Enter the position at which you want to enter a node: ";
    cin>>n;
    cout<<"Enter data: ";
    cin>>x;
    Node* temp = new Node();
    temp->data=x;
    if(n==1)
    {
        head->prev=temp;
        temp->next=head;
        head=temp;
        tail->next=head;
        head->prev=tail;
    }
    else
    {
        Node* prev_node = head;
        for(int i=0;i<n-2;i++)
        {
            prev_node=prev_node->next;
        }   
        temp->next=prev_node->next;
        prev_node->next=temp;
        temp->prev=prev_node;
        if(temp->next!=head)
		{
			temp->next->prev=temp;
		}
        else
        {
            temp->next=head;
            temp->next->prev=tail;
        }
        
    }
}

void delete_pos()
{
    int n;
	cout<<"Enter the position from which the node has to be removed: ";
	cin>>n;
	Node* temp = new Node();
	Node* pos_node = head;
    if(n==1)
	{
		temp=head;
        tail->next=temp->next;
        temp->next->prev=tail;
		head=temp->next;
		delete temp;
	}
}

void print_list()
{
    Node *temp = head;
    cout << "LIST: ";
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp==tail)
        {
            cout << tail->data << " ";
        }
    }
}

int main()
{
    int c;
    while (1)
    {
        cout << "----MENU----" << endl;
        cout << "1. Create list" << endl;
        cout << "2. Print list" << endl;
        cout << "3. Insert node" << endl;
        cout << "4. Delete node" << endl;
        /*cout << "5. Search node" << endl;*/
        cout << "0. Exit" << endl;
        cout << "Enter the choice" << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            create_list();
            cout << endl;
            break;
        case 2:
            print_list();
            cout << endl;
            break;
        case 3:
            insert_pos();
            cout << endl;
            break;
        case 4:
            delete_pos();
            cout << endl;
            break;
        /*case 5:
            search_node();
            cout << endl;
            break;*/
        default:
            exit(0);
        }
    }
    return 0;
}
