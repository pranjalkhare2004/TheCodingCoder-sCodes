#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;


class Hashing 
{
    vector<list<int>> hashtable;
    int buckets;
    
    public:
    Hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    int hashValue(int key) {
        return key%buckets;
    }

    void addKey(int key) {
        int idx = hashValue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchKey(int key) {
        int idx = hashValue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }
    
    void deleteKey(int key) {
        
        int idx = hashValue(key);
        
        if (searchKey(key)!=hashtable[idx].end()) {

            hashtable[idx].erase(searchKey(key));
            cout << key << " is deleted" << endl;
            
        }
        else{
            cout<<" Key is not present in the hashtable"<<endl;
        }
    }


 };

 int main() {

    Hashing h(10);


    h.addKey(5);
    h.addKey(9);
    h.addKey(8);
    h.addKey(7);
    h.addKey(15);

    h.deleteKey(9);
    h.deleteKey(10);

    int y = h.hashValue(15);
    // int z = h.searchKey(7);

    cout <<"hash value: " << y <<endl;
    // cout <<"searched value id: " << z <<endl;

    return 0;

 }