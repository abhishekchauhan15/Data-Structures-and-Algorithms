//insertion in the middle in linked list

struct node {
    int data;
    struct node *next;
};

struct node* start =NULL:

void append(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("enter node data:");
    scanf("%d",&temp->data);

    temp->next = NULL;

    if(start==NULL){
        start = temp;
    }else{
        start node *p;
        p = start;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = temp;
    }
}





