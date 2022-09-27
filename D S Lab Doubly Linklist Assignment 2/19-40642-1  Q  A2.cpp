#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct node1{
	int info;
	struct node1* next;
	struct node1* prev;
}node;
node *head=NULL;
node *tail=NULL;
node *create(int i){
	node* tmp=(node*)malloc(sizeof(node));
	tmp->info=i;
	tmp->next=NULL;
	tmp->prev=NULL;
	cout<<"\n Node Cretaed...!!!!"<<endl;
	return tmp;
}
void addtohead(node *tmp){
	system("cls");
	node *t;
	t=head;
	t->prev=tmp;
	tmp->next=t;
	head=tmp;
	cout<<"\nNode inserted at the start...!!";
}
void addtoend(node *tmp){
	system("cls");
    if(head==tail){
    	head->next=tmp;
    	tmp->prev=head;
    	tail=tmp;
	}
	else{
        tail->next=tmp;
        tmp->prev=tail;
        tail=tmp;
	}
	cout<<"\nNode inserted at the end...!!!"<<endl;
}
void atpos(node *newnode){
	system("cls");
	node *nextp,*curr,*tmp;
	int i,pos;
	cout<<"\nEnter the position at which you want to insert the node ?? ";
	cin>>pos;
	if(pos==1){
		addtohead(newnode);
	}
	else{
	   curr=head;
	   nextp=head->next;
	   for(i=1;i<pos-1;i++){ nextp=nextp->next; curr=curr->next;}
	    tmp=nextp;
	    curr->next=newnode;
	    newnode->prev=curr;
	    newnode->next=tmp;
	    tmp->prev=newnode;
	   cout<<"\nNode inserted at position "<<pos<<endl;
    }
}
void insert(){
	int data,i,p,ch;
	do{
	   system("cls");
	   cout<<"\nEnter the element you want to insert : "<<endl;
	   scanf("%d",&data);
	   node* tmp=create(data);
	   if(head==NULL){
	     	head=tail=tmp;
	    	cout<<"\nList was Empty....Item inserted at first position !!!"<<endl;
     	}
    	else{
			   cout<<"\nAt which position you want to insert the item ??? ";
			   cout<<"\n1.Begining";
			   cout<<"\n2.Ending";
			   cout<<"\n3.At specific position";
			   cout<<"\nEnter your choice : ";
			   cin>>p;
			    switch(p){
				    case 1: addtohead(tmp);
				            break;
				    case 2: addtoend(tmp);
				            break;
				    case 3: atpos(tmp);
				            break;
                    default: cout<<"\n Wrong choice ...!  Enter again ";
			    }
		}
	    cout<<"\nDo you want to insert another node (1/0) ??"<<endl;
		cin>>ch;
	}while(ch==1);
}
void deletefromhead(){
	system("cls");
	node *tmp=head;
	head=head->next;
	head->prev=NULL;
	 cout<<"\nNode deleted from head is : "<<tmp->info;
	free(tmp);
}
void deletefromend(){
	system("cls");
	node *tmp=tail;
	tail=tail->prev;
	 cout<<"\nNode deleted from end is : "<<tmp->info;
	free(tmp);
	tail->next=NULL;
}
void deletepos(){
	system("cls");
	int pos,i,c;
	node *pre,*curr;
	pre=head;
	curr=head->next;
	 cout<<"\nEnter the position of node you want to delete : ";
	cin>>pos;
	if(pos==1)
		deletefromhead();

	else{
		for(i=1;i<pos-1;i++){
		    curr=curr->next;
		    pre=pre->next;
		}
        cout<<"\nNode deleted from position "<<pos<< " is "<<curr->info;
	    pre->next=curr->next;
	    curr->next->prev=pre;
	    free(curr);
    }
}
void deletend(){
	int p,ch;
	do{
		if(head==NULL){
			printf("\nList is empty...!!!!");
		}
		else if(head==tail){
            cout<<"\nOnly one element in the list.. deleted node is : "<<head->info;
			free(head);
			head=NULL;
			tail==NULL;
		}
		else{
			system("cls");
			 cout<<"\nFrom which position you want to delete the node ?? ";
			 cout<<"\n1.Begining";
			 cout<<"\n2.Ending";
			 cout<<"\n3.At specific position";
			 cout<<"\nEnter your choice : ";
			 cin>>p;
			switch(p){
				case 1: deletefromhead();
				        break;
				case 2: deletefromend();
				        break;
				case 3: deletepos();
				        break;
                default:  cout<<"\nWrong choice ...Enter again...!!!";
		    }
	    }
	    cout<<"\nDo you want to delete another node (1/0)??";
	    cin>>ch;
    }while(ch==1);
}
void reverse(){
	system("cls");
	node *tmp=tail;
	if(head==NULL)
	    cout<<"\nList is empty..!!!";
	else{
		for(;tmp!=NULL;tmp=tmp->prev){
			if(tmp->prev==NULL)
			    cout<<" -> "<<tmp->info;
			else
			    cout<<" -> "<<tmp->info;
	    }
	}
}
void display(){
	system("cls");
	node *tmp=head;
	if(head==NULL)
		 cout<<"\nList is empty..!!!";
	else{
       for(;tmp!=NULL;tmp=tmp->next){
			if(tmp->next==NULL)
		         cout<<"->"<<tmp->info;
		    else
		      cout<<"->"<<tmp->info;
	   }
    }
}
int main(){
	int c,ch;
	do{
		 system("cls");
		 cout<<"\n Hey Welcome to Md Mahmodul Kabir's --DOUBLY LINKED LIST--"<<endl;
		 cout<<"\n1.INSERT into LINKED LIST";
		 cout<<"\n2.DELETE from LINKED LIST";
		 cout<<"\n3.DISPLAY the LINKED LIST";
		 cout<<"\n4.REVERSE the LINKED LIST";
		 cout<<"\n4.EXIT";
		 cout<<"\nEnter your choice : ";
         cin>>c;
        switch(c){
        	case 1: insert();
        	        break;
        	case 2: deletend();
        	        break;
        	case 3: display();
        	        break;
        	case 4: reverse();
			        break;
			case 5: exit(0);
		}
         cout<<"\nDo you want to perform any function again (1/0)???";
        cin>>ch;
	}while(ch==1);
	return 0;
}
