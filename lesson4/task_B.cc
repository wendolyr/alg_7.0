#include <iostream>
#include <queue>
#include <stack>

int main() {
  std::string command;
  std::queue<int> st;
  while (std::cin >> command && command != "exit") {
    if (command == "push") {
      int n = 0;
      std::cin >> n;
      st.push(n);
      std::cout << "ok" << std::endl;
    } else if (command == "pop") {
      if (st.empty()) {
        std::cout << "error" << std::endl;
      } else {
        std::cout << st.front() << std::endl;
        st.pop();
      }
    } else if (command == "front") {
      if (st.empty()) {
        std::cout << "error" << std::endl;
      } else {
        std::cout << st.front() << std::endl;
      }
    } else if (command == "size") {
      std::cout << st.size() << std::endl;
    } else if (command == "clear") {
      while (!st.empty()) {
        st.pop();
      }
      std::cout << "ok" << std::endl;
    }
  }

  std::cout << "bye" << std::endl;

  return 0;
}