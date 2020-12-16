#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t;
 
int main()
{
    int ch;
    void insertbeg();
    void insertend();
    int insertpos();
    void display();
    void deletebeg();
    void deleteend();
    int deletepos();
    void search();
 
    while(1)
    {
        printf("\n1.Insert at beg \n2.insert at end\n3.insert at pos\n4.delete at beg\n5.delete at end\n6.delete at pos\n7.display\n8.search\n9.exit");
      
        scanf("%d",&ch);
        switch(ch)
        {
          
                        case 1: insertbeg();
                                break;
                        case 2: insertend();
                                break;
                        case 3: insertpos();
                                break;
                        
                        case 4: deletebeg();
                                break;
                        case 5: deleteend();
                                break;
                        case 6: deletepos();
                                break;
                        case 7: display();
                                break; 
                        case 8: search();
                                break;
                        case 9: exit(0);
                        default: printf("wrong choice");
        }
      }
     return 0; 
       
}
 
void insertbeg()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
 
    if(start==NULL)        
    {
        t->next=NULL;
        start=t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}
 
void insertend()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;
 
    if(start==NULL)        
    {
        start=t;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        q=q->next;
        q->next=t;
    }
}
 
int insertpos()
{
    int pos,i,num;
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
 
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    t->data=num;
 
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
 
        q=q->next;
    }
 
    t->next=q->next;
    q->next=t;
    return 0;
}
 
void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        printf("linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}
 
void deletebeg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
 
void deleteend()
{
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        q=start;
        while(q->next->next!=NULL)
        q=q->next;
 
        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}
 
int deletepos()
{
    int pos,i;
 
    if(start==NULL)
    {
        printf("List is empty");
        return 0;
    }
 
    printf("Enter position to delete:");
    scanf("%d",&pos);
 
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements");
            return 0;
        }
        q=q->next;
    }
 
    t=q->next;
    q->next=t->next;
    printf("Deleted element is %d",t->data);
    free(t);
 
    return 0;
}
void search()
{
    int flag = 0, key, pos = 0;
 
    if (start == NULL)
    {
        printf(":No nodes in the list\n");
    }
    else
    {
        printf("\nEnter the value to search");
        scanf("%d", &key);
        for (t = start;t != NULL;t = t->next)
        {
            pos = pos + 1;
            if (t->data== key)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("\nElement %d found at %d position\n", key, pos);
        }
        else
        {
            printf("\nElement %d not found in list\n", key);
        }
    }    
}