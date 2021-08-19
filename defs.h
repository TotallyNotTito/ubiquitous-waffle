#include <iostream>
#include <cstring>

using namespace std;

struct node {
  node * next;
};

class graph {
  public :
    graph();
    ~graph();

  private:
    node * head;
    node * tail;
};
