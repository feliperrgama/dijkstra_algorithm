#include <iostream>
#include "json_reader.hpp"

using namespace std;

int main() {
    json graph = readGraphinJson("../data/graph.json");
    
    cout << graph << endl;
}