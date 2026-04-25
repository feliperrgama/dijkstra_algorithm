#include "dijkstra.h"
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

char menu(const json &graph) {
  cout << "\n\nMenu\n" << endl;
  cout << "Nodes: ";

  for (auto &[node, edges] : graph.items()) {
    cout << " | " << node;
  }

  cout << "\nChoose a start point (the start node): ";
  char start_point;
  cin >> start_point;

  return start_point;
}

void dijkstra(const json &graph, const char start_point) {
  // Definindo a distâncias de cada nó que não é de o nó de origim como INFINITO
  // e a distâncio do nó de origem como 0.
  vector<char> nodes;
  for (auto &[node, edges] : graph.items()) {
    nodes.push_back(node.c_str()[0]);
  }

  unordered_map<char, int> distances;
  for (auto &node : nodes) {
    if (node == start_point) {
      distances[node] = 0;
    } else {
      distances[node] =
          INT_MAX; // The dijkstra algorithm assumes that distance have to be
                   // infinity, but we'll use the INT_MAX to represent it. So,
                   // here INT_MAX = INIFINITY.
    }
  }

  // Continue by here:
  // https://www.w3schools.com/dsa/dsa_algo_graphs_dijkstra.php
}