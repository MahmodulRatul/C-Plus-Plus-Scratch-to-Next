//A C++ Code For Read , Insert , Delete ,Sum And Print an Array.
#include<iostream>
using namespace std;
class Array_class
{
public:
    ReadArray(int *Array,int elementnumber);
    InsertArray(int *Array,int &current_size,int pos,int insert_item);
    DeleteArray(int *Array,int &current_size,int delete_items);
    SumArray(int *Array,int element);
};
Array_class::ReadArray(int *Array,int elementnumber)
{
int i;
    for(i=0; i<elementnumber; i++)
    {
        int element;
        cout<<"Array["<<i<<"]"<<" = ";
        cin>>element;
        Array[i]=element;
    }
}
Array_class::InsertArray(int *Array,int &current_size,int pos,int insert_item)
{
    current_size++;
    int i;
    for(i=current_size; i>pos; i--)
    {
        Array[i]=Array[i-1];
    }
    Array[pos]=insert_item;
}
Array_class::SumArray(int *Array,int element)
{
int i;
    for(i =0; i<=element; i++)
    {
       Array[i+1]=Array[i]+Array[i+1];
    }

cout<<"Now the new Array is :\n";
		for(i=0; i<element; i++)
		{
			cout<<Array[i]<<" "<<endl;
		}
}
Array_class::DeleteArray(int *Array,int &current_size,int delete_items)
{
        int count=0,i;
        for(i=0; i<current_size; i++)
	{
		if(Array[i]==delete_items)
		{
			for(int j=i; j<(current_size-1); j++)
			{
				Array[j]=Array[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<delete_items<<" not found..!!\n";
	}
	else
	{
	    current_size--;
		cout<<delete_items<<" deleted successfully..!!\n";
		cout<<"Now the new array is :\n";
		for(i=0; i<(current_size); i++)
		{
			cout<<Array[i]<<" "<<endl;
		}
	}
    }
void print(const int* a, int s)
{
    int i;
    cout<<"\nArray: [ ";
    for(i=0; i < s; i++)
        cout<<a[i]<<" ";
    cout<<"]\n";
}
main()
{
    Array_class obj1;
    int *Array;
    int Maxsize,Array_size,pos,element;
    while(true)
    {
        int choice;
        cout<<" Welcome to Md Mahmodul Kabir's Timeline"<<endl;
        cout<<" 0)Exit  1)Read Array   2)Insert Array   3)Delete Array  4)Sum Array  5)Print Array "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            while(true)
            {
                cout<<"Enter the size of the array: ";
            cin>>Maxsize;
                if(Maxsize<1 || Maxsize>50)
                {
                    cout<<"Wrong input !!!"<<endl;
                }
                else
                {
                    break;
                }
            }
            Array=new int[Maxsize];
               while(true)
    {
        cout <<"Enter the number of element you want to insert:";
        cin >> Array_size;
        if(Array_size<1 || Array_size>Maxsize)
            cout<<"Wrong input!!!\n";
        else
            break;
    }
            obj1.ReadArray(Array,Array_size);
            break;
        case 2:
              while(true)
            {
                cout<<"Enter the position where you want to insert element : ";
            cin>>pos;
            cout<<"Enter the element you want to insert : ";
            cin>>element;
                if(pos<0 || pos>Array_size)
                {
                    cout<<"Wrong input."<<endl;
                    break;
                }
                else
                {
                    break;
                }
            }
            obj1.InsertArray(Array,Array_size,pos,element);
            break;
        case 3:
            int delete_pos;
            cout<<"Enter the element which you want to delete  : ";
            cin>>delete_pos;
            obj1.DeleteArray(Array,Array_size,delete_pos);
            break;
        case 4:
                      while(true)
            {

                if(Array_size<0)
                {
                    cout<<"Sorry the array is empty."<<endl;
                    break;
                }
                else
                {
                    break;
                }
            }
            obj1.SumArray(Array,Array_size);
            break;
        case 5:
            print(Array,Array_size);
            break;
            case 0:
            return 0;
            default:
        cout<<"Wrong input.Try to choose from the above options ."<<endl;
        }
    }
    }
