#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void printGraph(vector<int> graph[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout << "\n Adjacency list of vertex " <<i<< "\n head ";
        for (auto x : graph[i])
            cout << "-> " << x;
        cout<<endl;
    }
}
int main()
{
    int v=7;
    vector<int> graph[7];
    addEdge(graph,0,5);
    addEdge(graph,3,5);
    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,2);
    addEdge(graph,3,2);
    addEdge(graph,3,4);
    addEdge(graph,4,6);
    printGraph(graph,7);
}
