CXX = g++
CXXFLAGS = -Wall -Wextra
SRCS = dijkstra.cpp main.cpp json_parser.cpp graph.cpp
OBJS = $(SRCS:.cpp=.o)

dijkstra:: $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) dijkstra
