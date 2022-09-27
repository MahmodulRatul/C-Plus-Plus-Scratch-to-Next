// A program implementing array operations including traversing (printing), searching, insertion, deletion

#include<iostream>
using namespace std;
void print(const int*, int);
int main(){
//######## declaring the required variable to represent an array
    //  N = the number of elements stored in the array
    //  Array = a pointer to an integer number
    int *Array, N;

    while(true){
        cout << "How many numbers to store: ";
        cin >> N;
        if(N<1 || N>20)cout<<"Wrong input!!!\n";
        else break;
    }

    Array = new int[N];

//######## Reading N Elements to store in the array
    for(int i=0; i < N; i++){
        cout<<"Array["<<i<<"] = ";
        cin >> Array[i];
    }
    print(Array,N);
//######## Choose option to do different operations on the array
    int choice=0,item,i,j;
    while(true){
      cout<<"\n0)Exit \n1) Bubble Sorting \n2) Selection Sorting \n3) Insertion Sorting\nEnter option: ";
      cin>>choice;
      bool sorted;
      switch(choice){
        case 1:
            //IMPLEMENT Bubble sort here
            for(i=1;i<N;++i)
	{
		for(j=0;j<(N-i);++j)
			if(Array[j]>Array[j+1])
			{
				item=Array[j];
				Array[j]=Array[j+1];
				Array[j+1]=item;
			}
	}

            cout<< "After bubble sorting: ";
            print(Array,N);
            break;
        case 2:
            //IMPLEMENT Selection sort here
            for(i=0; i<N; i++)
	{
		for(j=i+1; j<N; j++)
		{
			if(Array[i]>Array[j])
			{
				item=Array[i];
				Array[i]=Array[j];
				Array[j]=item;
			}
		}
	}
            cout<< "After selection sorting: ";
            print(Array,N);
            break;
        case 3:
            //IMPLEMENT Insertion sort here
            for(i=1; i<N; i++)
	{
		item=Array[i];
		j=i-1;
		while((item<Array[j]) && (j>=0))
		{
			Array[j+1]=Array[j];
			j=j-1;
		}
		Array[j+1]=item;
	}
            cout<< "After insertion sorting: ";
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
