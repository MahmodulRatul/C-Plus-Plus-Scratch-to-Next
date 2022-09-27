// A program implementing array operations including traversing (printing), searching, insertion, deletion

#include<iostream>
using namespace std;
void print(const int*, int);
int main(){
//######## declaring the required variable to represent an array
    //  MAX = the size of the array
    //  N = the number of elements stored in the array
    //  Array = a pointer to an integer number
    int *Array, MAX, N;

//######## Initializing the MAX variable
    while(true){
        cout << "Enter the size of the array: ";
        cin >> MAX;
        if(MAX<1 || MAX>999)cout<<"Wrong input!!!\n";
        else break;
    }

//######## Assigning memory address to the array pointer
    Array = new int[MAX];

//########  Initializing N [how many elements to store??]
    while(true){
        cout << "Number of Elements: ";
        cin >> N;
        if(N<1 || N>MAX)cout<<"Wrong input!!!\n";
        else break;
    }

//######## Reading N Elements to store in the array
    for(int i=0; i < N; i++){
        cout<<"Array["<<i<<"] = ";
        cin >> Array[i];
    }

    int choice=0, item, pos,i;
    bool found=false;
    while(true){
    //######## Choose option to do different operations on the array
      cout<<"\n0)Exit 1)Insert 2)Delete 3) Search 4)Print\nEnter option: ";
      cin>>choice;
      switch(choice){
        case 1:
            //######## check if the array is full
            if(N == MAX){
                cout<<"Array is already Full!!! Can't insert.\n";
                break;
            }

            //######## if the array is not full take inputs
            cout<<"Enter the element to insert: ";
            cin >> item;
            while(true){
                cout<<"Insert at index: ";
                cin >> pos;
                if(pos<0 || pos > N)cout<<"Wrong input!!!\n";
                else break;
            }

            //print the array before insertion
            print(Array,N);

            //######## Insertion operation starts
            //shifting all elements to right [starting from last index to the position]
            for(i = N; i > pos; i--)Array[i] = Array[i-1];
            //insert the value
            Array[pos] = item;
            // increase N by 1
            N++;
            //######## Insertion operation finished
            // print the array after insertion
            print(Array,N);
            break;
        case 2:
            //######## check if the array is empty
            if(N == 0){
                cout<<"Array is already Empty!!! Can't delete.\n";
                break;
            }
            while(true){
                cout<<"Enter Position (Index) to delete: ";
                cin >> pos;
                if(pos<0 || pos >= N)cout<<"Wrong input!!!\n";
                else break;
            }
            //print the array before deletion
            print(Array,N);
            //######## Deletion operation starts

            // IMPLEMENT DELETE OPERATION HERE
            for (int k=pos;k<N-1;k++)
            {
                Array[k]=Array[k+1];
            }
            N--;

            //######## Deletion operation finished
            //print the array before deletion
            print(Array,N);
            break;
        case 3:
            //######## check if the array is empty
            if(N == 0){
            cout<<"Array is already Empty!!!\n";
                break;
            }
            cout<<"Which element to search? ";
            cin>>item;
            found = false;

            // IMPLEMENT SEARCH OPERATION HERE
            for (i=0;i<MAX;i++)
            {
                if(Array[i]==item)
                    {
                        found=true;
                        if(found)
                        {
                            cout<<item<<"found at index"<<i<<endl;
                        }
                    }
            }
            if(found==false)
                cout<<item<<"not found !!! \n";

            /*if(found)cout<<item<<" found at index "<<i<<endl;
            else cout<< item<<" not found!!!\n";
            break;*/

        case 4:
            print(Array,N);
            break;
        case 0:
            return 0;
      }
    }
    return 0;
}

void print(const int* a, int s){
    cout<<"\nArray: [ ";
    for(int i=0; i < s; i++)cout<<a[i]<<" ";
    cout<<"]\n";
}
