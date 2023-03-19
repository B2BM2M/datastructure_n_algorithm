#include <iostream>
#include <vector>

using namespace std;

void printGraph(vector<int> graph[], int n) {

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example graph
    vector<int> graph[6];
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(1);
    graph[2].push_back(4);
    graph[2].push_back(5);
    graph[3].push_back(1);
    graph[3].push_back(5);
    graph[4].push_back(2);
    graph[5].push_back(2);
    graph[5].push_back(3);

    // Print out the graph
    int n = 5; // number of nodes in the graph
    printGraph(graph, n);
    return 0;

    /* output
    1 -> 2, 3
    2 -> 1, 4, 5
    3 -> 1, 5
    4 -> 2
    5 -> 2, 3
    */

}

/*
To represent this graph using vector<int> graph[], 
we would create an array of vectors with size 6 (since we have 5 vertices numbered from 1 to 5):
vector<int> graph[6];

Then, we would add the edges to the array of vectors:
graph[1].push_back(2);
graph[1].push_back(3);

graph[2].push_back(1);
graph[2].push_back(4);
graph[2].push_back(5);

graph[3].push_back(1);
graph[3].push_back(5);

graph[4].push_back(2);

graph[5].push_back(2);
graph[5].push_back(3);

The resulting graph data structure would look like this:
graph[1]: 2 3
graph[2]: 1 4 5
graph[3]: 1 5
graph[4]: 2
graph[5]: 2 3

Each element graph[i] in the array is a vector that represents the neighbors of node i. 
In this example, graph[1] is a vector containing the neighbors of node 1, which are nodes 2 and 3.

1 -> 2, 3
2 -> 1, 4, 5
3 -> 1, 5
4 -> 2
5 -> 2, 3
*/

