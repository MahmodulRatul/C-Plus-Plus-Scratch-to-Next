/*
This code define four functions namely insertion, deletion, search and traverse
for linked list data structure.
*/
#include<iostream>
using namespace std;
//Defining the node
struct node
{
    int data;
    node * link;
};
//initializing head (first node) to null
node *head=NULL;
//Defining a function to add a node after a previous node
node* addNode(int num, node * prev=NULL)
{
    // creating the node
    node *newNode = new node;
    newNode -> data = num;
    newNode -> link = NULL;

    //adding node at head (prev = null)
    if(prev==NULL){
        newNode->link = head;
        head = newNode;
    }

    //adding node after previous
    else
    {
        newNode->link = prev->link;
        prev->link =newNode;
    }
    return newNode;
}
// Now implement a function named deleteNode to delete a node (data)
node* deleteNode(int value)
{
    if ( head->data==value )
        {
            node* ptr=head;
            head=ptr->link;
            delete (ptr);
        }
    else
    {node* ptr=head;
    while(ptr->link->data!=value&&ptr->link!=NULL)
            {
            node*dptr = ptr->link;
            }
            node*dptr=ptr->link;
            ptr->link->link;
            delete (dptr);
    }
}

void show()
{
    node * curr = head;
    while(curr != NULL)
    {
        cout<< curr->data << "->";
        curr = curr->link;
    }
    cout<<"\n\n";
}
/*
Now implement a function named searchData to search a particular value.
The function should return address of the node where the search element is found
otherwise return NULL.
*/
node* searchData(int key){
    //COMPLETE THE FUNCTION
    node*ptr=head;
    while(ptr->data!=key&&ptr->link !=NULL)
    ptr=ptr->link;
    if(ptr->data==key)
    return ptr;
    else
    return NULL;
    }

int main()
{
    // populate linked list with some values
    int n,elem,i;
    head = NULL;
    cout<<"How many elements? ";
    cin>>n;
    node *p=NULL,*tmp;
    for(i=0; i<n; i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>elem;
        p = addNode(elem,p);
    }
    show();
    int choice;
    while(true)
    {
        cout<<"\n1) search data\n2) add data\n3) add data at head\n4) delete data\n5) show List\n0) Exit\nEnter option: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            //use searchData function here
            int value;
            cout<< "Enter the element :"<<endl;
            cin >> value ;
            searchData(value);
            tmp=searchData(value);
            if (tmp==NULL)
            cout<<value<<"  Not Found"<< endl;
            else
            cout<<value<<"  Found"<< endl;
            show();
            break;
        case 2:
            //use addData function here
            cout<<"After which element to insert? ";
            cin>>elem;
            tmp = searchData(elem);
            if(tmp == NULL)
                cout<<elem <<" does not exist in the linked list!\n";
            else
            {
                cout<<"Which element to insert? ";
                cin>>elem;
                addNode(elem,tmp);
            }
            show();
            break;
        case 3:
            cout<<"Which element to insert? ";
            cin>>elem;
            addNode(elem);
            show();
            break;
        case 4:
            //use deleteData here
            int dlvalue;
            cout<< "Which element is to delete ?:";
            cin >>dlvalue;
            tmp = searchData(dlvalue);
            if (tmp==NULL)
                cout<<dlvalue<<"Does not Exist "<<endl;
                else
            {
                deleteNode(dlvalue);
            }
            show();
            break;
        case 5:
            show();
            break;
        case 0:
            return 0;
        }
    }
    return 0;
}
