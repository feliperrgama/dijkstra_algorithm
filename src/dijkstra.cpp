#include "dijkstra.h"
#include <iostream>
#include <string>

using namespace std;

char menu(const json &graph) {
  cout << "\n\nMenu\n" << endl;
  cout << "Nodes: ";

  // Terminar o menu e mostrar o grafo com os nós e os caminhos de forma mais
  // visible para o usuário.

  for (auto &[node, edges] : graph.items()) {
    cout << node << " ";
  }

  cout << "\nChoose a start point:\n";
  char start_point;
  cin >> start_point;

  return start_point;
}

void dijkstra(const json &graph, char start_point) {}