#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<int> graph[], int start, int n) {
    // create a boolean array to track visited nodes
    bool visited[n+1] = {false};
    
    // create a queue to store the nodes to be visited
    queue<int> q;
    
    // mark the starting node as visited and add it to the queue
    visited[start] = true;
    q.push(start);
    
    // use a while loop to visit each node in the queue
    while (!q.empty()) {
        // get the next node in the queue
        int node = q.front();
        q.pop();
        
        // print the value of the visited node
        cout << node << " ";
        // int g = graph[node].size();
        // cout << "graph node is " << g <<" " << endl;
        // visit each unvisited neighbor of the node
        for (int i = 0; i < graph[node].size(); i++) {
            int neighbor = graph[node][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

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
    int n = 6;
    vector<int> graph[n+1];
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(1);
    graph[2].push_back(4);
    graph[2].push_back(5);
    graph[3].push_back(1);
    graph[3].push_back(5);
    graph[4].push_back(2);
    graph[4].push_back(5);
    graph[4].push_back(6);
    graph[5].push_back(2);
    graph[5].push_back(3);
    graph[5].push_back(4);
    graph[6].push_back(4);
    bfs(graph, 1, n);
    cout << endl;
    printGraph(graph, n);
    return 0;
}

/*
BFS is a graph traversal algorithm that visits all the vertices of a 
graph in breadth-first order, i.e., it visits all the vertices at 
the same level before moving on to the next level.

In this example, the bfs function takes a vector of integer arrays representing the graph, 
the starting node, and the number of vertices in the graph. The function initializes a 
boolean array to track visited nodes, a queue to store the nodes to be visited, 
and marks the starting node as visited and adds it to the queue. 
The function then uses a while loop to visit each node in the queue, print the node's value, 
and add its unvisited neighbors to the queue. The function also marks each neighbor as visited to avoid revisiting nodes.

The main function initializes the graph as a vector of integer arrays and calls 
the bfs function to traverse the graph starting at node 1.
*/

/*
    The bfs function takes three arguments: graph[] is an array of vectors that represents the graph, 
    start is the starting vertex, and n is the number of vertices in the graph.

    In the first line of the bfs function, a boolean array called visited is created. 
    This array is used to keep track of which nodes have already been visited during the search.

    A queue is created to store the nodes to be visited. The queue data structure uses a First-In-First-Out (FIFO) order, 
    which is exactly what we need for BFS. We add the starting node to the queue and mark it as visited.

    The main loop of the algorithm is implemented using a while loop that runs as long as the queue is not empty. 
    Inside this loop, we extract the first element from the queue (using q.front()), visit it, and print its value. 
    Then, we look at all the neighbors of the current node that haven't been visited yet. For each unvisited neighbor, 
    we add it to the queue and mark it as visited.

    When the loop is finished, we have visited all the vertices in the graph that are reachable from the starting vertex.
    
*/
