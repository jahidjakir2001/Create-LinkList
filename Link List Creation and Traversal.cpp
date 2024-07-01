
#include<bits/stdc++.h>
using namespace std;
struct node
{
     int data;
     struct node *next;
};
void TraversalLinkList(struct node *ptr)
{
      cout<<"Traverse link list left to right"<<endl;
      while(ptr!=NULL)
      {
            printf("Element : %d\n",ptr->data);
            ptr=ptr->next;
      }
}
int main()
{
      struct node *head,*First,*Second,*Third;
      head=NULL;
      First=NULL;
      Second=NULL;
      Third=NULL;
      head=(struct node *)malloc(sizeof(struct node));
      Second=(struct node *)malloc(sizeof(struct node));
      First=(struct node *)malloc(sizeof(struct node));
      Third=(struct node *)malloc(sizeof(struct node));
      if(head==NULL||First==NULL||Second==NULL||Third==NULL)
      {
            cout<<"Dose not Allocate Dynamic Memory"<<endl;
            return 0;
      }
      head->data=10;
      head->next=First;
      First->data=20;
      First->next=Second;
      Second->data=30;
      Second->next=Third;
      Third->data=40;
      Third->next=NULL;
      TraversalLinkList(head);
      return 0;
}
