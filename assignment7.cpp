#include<iostream>
using namespace std;
#define tablesize 10
class dbhs
{
private:
    int table[tablesize];
public:
    dbhs()
    {
        for(int i=0;i<tablesize;i++)
        table[i]=0;
    }
    void hashing(int key)
    {
        int h1,h2,h3,i,f;
        f=0;
        h1=key%tablesize;
        if(table[h1]==0 && h1<tablesize)
        {
            table[h1]=key;
            cout<<"\n "<<key<<" is placed succesfully at position "<<h1;
        }
        else
        {
            h2=7-(key%7);
            for(i=1;i<tablesize;i++)
            {
                h3=((h1+(i*h2))%tablesize);
                if(table[h3]==0 && h3<tablesize)
                {
                    table[h3]=key;
                    cout<<"\n "<<key<<" is placed succesfully at position "<<h3<<endl;f=1;
                    break;
                }
            }
            if(f==0)
            cout<<"\n table is full.\n";
        }

    }
    void print()
    {
        for(int i=0;i<tablesize;i++)
            cout<<"  "<<table[i];
        cout<<endl;
    }

};

int main()
{
    int ch,key;
    dbhs d;
    while(1)
    {
        cout<<"\n 1. enter a key \n 2. print table \n 3. exit \n";cin>>ch;
        if(ch==3)
            break;
            if(ch==2)
                {d.print();break;}
            cout<<"enter key : ";cin>>key;
            d.hashing(key);
    }
    return 0;
}
