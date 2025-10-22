#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;
    int n=5;
    //adding into the vector
    for(int i=0;i<n;i++){
        v.push_back(i);
    }

    cout << "the elements in the vector: ";
    for(auto it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }

    cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();
  }


  // if 'it' prints: 
//   Simple reason (interview answer):

// The variable it is an iterator, not the actual element.
// Iterators work like pointers — they “point to” elements inside a container.
// You can’t directly print an iterator because cout doesn’t know how to display an iterator object.
// To print the value it points to, you must dereference it using *it.

// If interviewer asks “Why does it give an error?” — say:

// Because std::cout doesn’t have an overloaded operator<< for iterator types like
// __gnu_cxx::__normal_iterator<int*, std::vector<int>>.
// cout only knows how to print basic data types (int, char, double, etc.), not iterators.


// In one line (perfect interview summary):

// ❝ It gave an error because it is an iterator (not the actual element).
// We need *it to get the value it points to before printing. ❞