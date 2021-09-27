#include <bits/stdc++.h>
using namespace std;

const int VERTEXES = 5;

bool arr[VERTEXES][VERTEXES] = {};

void OutputGraph(){
    for (int i = 0; i < VERTEXES; i++){
        for (int k = 0; k < VERTEXES; k++){
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
}

void add_directed_edge(int index1, int index2, bool value){
    arr[index1][index2] = value;
}
void add_undirected_edge(int index1, int index2, bool value){
    arr[index1][index2] = value;
    arr[index2][index1] = value;
}

void bfs(int start, int end){
    queue <int> order;
    int visited[VERTEXES] = {0, 0, 0, 0, 0};
    std::list<int> path;
    path.push_back(start);
    order.push(start);
    visited[start] = true;
    int start2end[] = {};
    int now;
    cout << "_______________" <<endl;
    while(!order.empty()){
        int layer[] = {};
        int layerNow = 0;
        now = order.front();
        for (int node = 0; node < VERTEXES; node++){
        //cout << "array bool value: " << arr[now][node] << endl;
            if ((arr[now][node] == true) && (visited[node] == 0)){
                //cout << "start: " << now << " connection: " << node<<endl;
                cout << now << "->" << node << "\n";
                order.push(node);
                visited[node] = true;
                path.push_back(node);
                layer[layerNow] = node;
            }
        }
        order.pop();
    }

    cout << "PATH: " <<endl;
    //cout << "mylist stores " << path.size() << " numbers.\n";
    for (auto v : path){
        cout << v << "\n";
    }
    cout << "_______________" <<endl;
        
        






}
int main() {
    add_undirected_edge(2, 3, true);
    add_undirected_edge(0, 2, true);
    add_undirected_edge(0, 1, true);
    add_undirected_edge(0, 3, true);
    add_undirected_edge(3, 4, true);
    OutputGraph();
    //int visited[VERTEXES] = {};
    //cout << visited[0] << visited[4];
    bfs(0, 3);
    bfs(1, 3);
    
}





