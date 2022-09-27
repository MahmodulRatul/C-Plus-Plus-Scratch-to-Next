//Heap - Delation , Insertion , Sorting , Display.
#include<iostream>
using namespace std;

const int MAX_SIZE=100;
int Heap[MAX_SIZE+1], N=0;
void Heapify(){
    int p=N/2,swapCount=0;
    while(p>=1){//repeat for each parent
        int curr=p,lc=curr*2, rc=lc+1, sm;
        while(lc<=N)
            {//repeat till leaf nodes are reached
            if(rc>N)sm=lc;
            else sm=Heap[lc]<Heap[rc]?lc:rc;
            if(Heap[curr]>Heap[sm]){
                int tmp=Heap[curr];
                Heap[curr]=Heap[sm];
                Heap[sm]=tmp;
                swapCount++;
                curr=sm;
                lc=curr*2;
                rc=lc+1;
            }
            else break;
        }
        p--;
    }
    cout<<"Total Swap: "<<swapCount<<"\n\n";
}
int insertHeap(int data,int arr[])
{   //implement this function
    N = N + 1;
    arr[N - 1] = data ;
    Heapify();
}
int deleteRoot(int arr[], int& N)
{   //implement this function
    int lastElement = arr[N - 1];
    arr[0] = lastElement;
    N = N - 1;
    Heapify();
}
int SortHeap(int arr[], int N)
{    for (int i = N / 2 - 1; i >= 0; i--)
        Heapify();
    for (int i=N-1; i>=0; i--)
    {swap(arr[0], arr[i]);
        Heapify();
    }
}
void showHeap(){
    if(N>0){
       for(int i=1;i<=N;i++)cout<<Heap[i]<<" ";
        cout<<"\n\n";
    }
    else cout<<"Heap does not exist!\n\n";
}
int main(){
    N=12;
    int a[13]={0,45,38,30,32,40,15,5,43,20,10,35,25};
    for(int i=1;i<=N;i++){
        Heap[i]=a[i];
    }
    showHeap();
    Heapify();
    showHeap();
    while(1){
        int choice=-1;
        cout<<"0) Exit\n1) Insert\n2) Delete root\n3) sort \nEnter Option: ";
        cin>>choice;
        switch(choice){
        case 1:
            int value;
            cout<<"Enter a value to insert: ";
            cin>>value;
            insertHeap(value);
            showHeap();
            break;
        case 2:
            deleteRoot();
            showHeap();
            break;
        case 3:
            SortHeap();
            showHeap();
            break;
        case 0:
            return 0;
        default:
            break;
        }
    }
    return 0;
}
