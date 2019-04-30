#include<iostream>
using namespace std;

class prim
{
    int adj[10][10],V,E,mstver[10];
public:
    void accept_values()
    {
        int i,j,u,v,w;
        i=j=0;
        while(i<10)
        {
            while(j<10)
            {
                adj[i][j]=0;
                j++;
            }
            i++;
        }
        cout<<"Enter the no. of vertices : ";cin>>V;
        cout<<"Enter the no. of edges : ";cin>>E;
        cout<<"Enter the edges (u & v) only and there weights resp. : \n";
        i=0;
        while(i<E)
        {
            cin>>u>>v>>w;
            adj[u][v]=adj[v][u]=w;
            i++;
            cout<<endl;
        }
    }
    void prim_s()
    {
        bool mstset[10];
        int key[10],i,j;
        for(i=0;i<V;i++)
        {
            key[i]=999;mstset[i]=false;
        }
        key[0]=0;
        mstver[0]=-1;

        for(i=0;i<V-1;i++)
        {
            int u=minkey(key,mstset);
            mstset[u]=true;

            for(j=0;j<V;j++)
            {
                if((adj[u][j]!=0) && (mstset[j]==false) && (adj[u][j]<key[j]))
                {
                    mstver[j]=u;key[j]=adj[u][j];
                }
            }
        }
        printmst();

    }
    int minkey(int key[],bool mstset[])
    {
        int i,max,min;
        max=999;
        for(i=0;i<V;i++)
        {
            if(mstset[i]==false && key[i]<max)
            {
            max=key[i];min=i;
            }
        }
        return min;
    }
    void printmst()
    {
        int i,w;w=0;
        cout<<"\n        edge weight \n";
        for(i=1;i<V;i++)
        {
            cout<<"        "<<mstver[i]<<"-"<<i<<"    "<<adj[mstver[i]][i]<<endl;
            w+=adj[mstver[i]][i];
        }
        cout<<"               ---  \n";
        cout<<"Total weight = "<<w<<"   \n";
    }
};

int main()
{
    prim p;
    p.accept_values();
    p.prim_s();
    return 0;
}
