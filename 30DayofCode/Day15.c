#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    Node* Ptr = head;
    Node* Temp;

    if (Ptr == NULL)
    {
        Temp = (Node*)malloc(sizeof(Node));
        Temp ->data = data;
        Temp ->next = NULL;
        Ptr = Temp;
        return Ptr;
    }
    else
    {
        Temp = (Node*)malloc(sizeof(Node));
    
        Temp ->data = data;

        while (Ptr -> next !=NULL)
        {
            Ptr= Ptr->next;
            /* code */
        }
        
        Ptr->next = Temp;
        Temp ->next = NULL;
        
    return head;
    }

//Complete this function
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
