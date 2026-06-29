#include <iostream> 
using namespace std; 

int main() { 
 int size, n; 
 cout << "Enter size of hash table: "; 
  cin >> size; 

  int hashTable[size]; 
    // Initialize hash table with -1 
    for (int i = 0; i < size; i++) { 
        hashTable[i] = -1; 
    } 

    cout << "Enter number of keys: "; 
    cin >> n; 
    int key; 
    cout << "Enter keys:\n"; 
 for (int i = 0; i < n; i++) { 
   cin >> key; 
   
        // Hash Function 
        int index = key % size; 
        // Linear Probing 

        while (hashTable[index] != -1) { 
            index = (index + 1) % size; 
        } 
        hashTable[index] = key; 
    } 

    // Display Hash Table 
    cout << "\nHash Table:\n"; 

    for (int i = 0; i < size; i++) { 
        cout << i << " --> "; 

        if (hashTable[i] == -1) 
            cout << "Empty"; 

        else 
        cout << hashTable[i]; 

        cout << endl; 
    } 
     return 0; 
} 