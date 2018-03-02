#include <iostream>
using namespace std;

struct node // structure having variable for data section and a pointer for the next node. 

{
 int data;
 node *next;
 };	
 
   class linkedList //  class  containing the functions to handle the nodes
{
 private:
    node *head, *tail; //Declaring two important pointers, i.e. head and tail
 public:
    linkedList() //The constructer will make them NULL to avoid any garbage value.
 {
  head=NULL;
 tail=NULL;
  }
 void insert(int value) // Function to enter values at the end of list
    {
      node *temp=new node;
      temp->data=value;
 temp->next=NULL;
 if(head==NULL)  //When the list is empty
     {
       head=temp;
      }
    else
        tail->next=temp;
        tail=temp;
    }

   void display()// to display the elements of the list
    {

   	node*temp= new node;
    	temp=head;
    	cout<<" list is:\n";
    	while(temp!=NULL)

    	{
    		cout<<temp->data<<"->";
    		temp=temp->next;
	}
    cout<<"NULL"<<endl;
   }

   int sortrimil(int n) //Arranging the list's element in ascending order using bubblesort

{           node *p=new node;
	node *q=new node;
for (int i=0;i<n;i++)

    {      p=head;
		for (int j=0;j<(n-i)-1;j++)
{

   	if(p->data > p->next->data)   
   	{

   	q->data=p->data;           //swapping the values to arrange in proper order
   	p->data=p->next->data;
   	p->next->data=q->data;
   		
   	}
   	p=p->next;
   }
    }
    return 0;
}

int binarySearch(int beg, int end,int num)
{
	while(head!=NULL)
	{
	int mid=(beg+end)/2;
	node *middle=new node;
	middle=head;
		for(int i=0;i<mid;i++)
		{
		  middle=middle->next;	
		}
	if(middle->data==num)
	{
		return mid+1;
	}
	else if(middle->data>num)
	{
		end=mid-1;
	}
	else 
	{
	            beg=mid+1;
	            for(int j=0;j<beg;j++)
	            {
	            head=head->next;
	            }
	}
	}
	return -1;
}
};

int main() {
	int n,num,el;
 linkedList l; // Declaring object of class linkedList
 cout<<"\nEnter the number of elements in the list:";
 cin>>n;
 cout<<n;
 cout<<"\nEnter the elements of list in any order.";
 for(int i=0;i<n;i++)
 {   cin>>el;
 	l.insert(el);
 }
 
 cout<<"The unsorted ";
 l.display(); //calling display function to print the unsorted list
 l.sortrimil(n);  //calling sort function to rearrange the array elements
 cout<<"The sorted ";
 l.display();  //calling the display function to print the sorted array
 int beg=0;
 int end=n-1;
 cout<<"\nEnter the element to be searched:";
cin>>num;
cout<<num;
int pos=l.binarySearch(beg,end,num);
cout<<"\nThe element is found at "<<pos;
	return 0;
}
