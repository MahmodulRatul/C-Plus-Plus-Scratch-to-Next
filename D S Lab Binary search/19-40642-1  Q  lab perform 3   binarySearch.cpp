#include<iostream>
using namespace std;
void print(const int* a, int s)
{
    cout<<"\nArray: [ ";
    for(int i=0; i < s; i++)cout<<a[i]<<" ";
    cout<<"]\n";
}
int Isort(int Array[], int N)
{
    int item,j;
for(int i=1; i<N; i++)
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
}

int Bsearch(int *Array,int N)
{
    int item,pos, firstIndex,midIndex, lastIndex;

            cout<<"Which element to search? ";
            cin>>item;
            pos = -1, firstIndex=0, lastIndex=N-1;

            midIndex=(firstIndex+lastIndex)/2;

            while (lastIndex>=firstIndex)
            { cout<<"middle :"<< midIndex<< ","  <<" First : "<<firstIndex<<","<< "Last: " << lastIndex<< endl;
                if(Array[midIndex] < item)
                {
                    firstIndex = midIndex + 1;

                }
                else if(Array[midIndex] == item)
                {
                    pos=midIndex;
                    break;
                }
                else
                {
                    lastIndex = midIndex - 1;
                }
                midIndex = (firstIndex + lastIndex)/2;
            }

            if(pos>=0)cout<<item<<" found at index "<<pos<<endl;

            else
            {
                cout<< item<<" not found!!!\n";
            }
return item;
}


int main()
{
    int *Array, N;
        cout << "How many numbers to store: ";
        cin >> N;
        if(N<1 || N>20)cout<<"Wrong input!!!\n";
    for(int i=1; i < N; i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin >> Array[i];
    }
    Isort(Array, N);
    Bsearch(Array, N);
    print(Array,N);

}
