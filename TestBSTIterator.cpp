#include <iostream>
#include <string>
#include "BST.h"
using namespace std;

string toUpperCase(string& s)
{
  for (int i = 0; i < s.length(); i++)
    s[i] = toupper(s[i]);

  return s;
}


int main()
{
  // Create a binary search tree for strings
  BST<string> tree;

  // Add elements to the tree
  tree.insert("America");
  tree.insert("Canada");
  tree.insert("Russia");
  tree.insert("France");

  // Traverse a binary tree using iterators
  for (Iterator<string> iterator = tree.begin();
    iterator != tree.end(); iterator++)
  {
    cout << toUpperCase(*iterator) << " ";
  }
  system("pause");
  return 0;
}

/*
c:\users\takyi\onedrive\desktop\west valley\c++ ds\fall 2020 c++ data structures\ch10 hw9 trees\liang\testbstiterator.cpp(8): warning C4018: '<': signed/unsigned mismatch
1>c:\users\takyi\onedrive\desktop\west valley\c++ ds\fall 2020 c++ data structures\ch10 hw9 trees\liang\testbstiterator.cpp(27): error C2676: binary '++': 'Iterator<T>' does not define this operator or a conversion to a type acceptable to the predefined operator
1>        with
1>        [
1>            T=std::string
1>        ]
*/
