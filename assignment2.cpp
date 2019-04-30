#include<iostream>
using namespace std;

class TBT
{
int data;
int lth,rth;
TBT *lptr,*rptr;
public:
void Create(int);
void Insert(TBT*,TBT*);
void Display_inorder(TBT*);
}*root=NULL,*headnode;

void TBT::Create(int y)
{

TBT *nn=new TBT;
nn->data=y;
nn->lptr=nn->rptr=NULL;
nn->lth=nn->rth=1;      //1=thread

if(root==NULL)
{
root=nn;
headnode=new TBT;
headnode->data=0;
headnode->lptr=root;
headnode->rptr=headnode;
headnode->lth=headnode->rth=1;
root->lptr=root->rptr=headnode;
}
else
Insert(root,nn);
}

void TBT::Insert(TBT* temp, TBT* nn)
{

if(nn->data<temp->data)
{
if(temp->lth==1)
{
nn->lptr=temp->lptr;      //nn->lptr pointing to headnode
temp->lptr=nn;
nn->rptr=temp;
temp->lth=0;
}
else Insert(temp->lptr,nn);
}

else if(nn->data>temp->data)
{
if(temp->rth==1)
{
nn->rptr=temp->rptr;     //nn->rptr pointing to headnode
temp->rptr=nn;
nn->lptr=temp;
temp->rth=0;
}
else Insert(temp->rptr,nn);
}

}

void TBT::Display_inorder(TBT* head)
{
TBT *current;
current=head->lptr;
while(current->lth!=1)
    current=current->lptr;
while(current!=head)
{
    cout<<current->data<<" ";
    if(current->rth==1)
        current=current->rptr;
    else
    {
        current=current->rptr;
        while(current->lth==0)
            current=current->lptr;
    }
}
}

int main()
{
TBT t;
int i,z,y;
cout<<endl<<"How many numbers you want to enter : ";cin>>z;
cout<<"\n enter numbers : ";
i=0;
while(i<z)
{
cin>>y;
t.Create(y);
i++;
}
cout<<endl<<"\ninorder : ";
t.Display_inorder(headnode);
return 0;
}
