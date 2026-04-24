#include "json_parser.h"
#include <fstream>
#include <iostream>

json readGraphinJson(const string &file_json_path) {
  ifstream graph_json(file_json_path);

  if (!graph_json.is_open()) {
    cerr << "Error to read the json graph file" << endl;
    return {};
  }

  json graph_json_data;
  try {
    graph_json >> graph_json_data;
  } catch (json::parse_error &e) {
    cerr << "Error to parse the json graph file" << endl;
    return {};
  }

  return graph_json_data;
}