

// // here we have to arrange arr1 in such  manner like it will have all the elements which are in arr2 be at first 
// // later the remaining elements in the last , in ascending order..

// arr1 = [2,3,1,3,2,4,6,7,9,2,19];
// arr2 = [2,1,4,3,9,6];


// map<int,int> a1;
// map<int,int> a2;

// vector<int> res;

// for(in the arr1): we add all elements in a1 of arr1;
// for(in the arr2): we add all elements in a2 of arr2;


// for loop for a1:
//     find similar to first of a2 : add it to the res;
//     continue until the end of a2;

// relative sort of array

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        map<int, int> a1;
        int a = arr1.size(), b = arr2.size();

        for(int i=0;i<a; i++){
            a1[arr1[i]]++;

        }

        for(auto x : arr2){

            if(a1.find(x) != a1.end()){

                auto temp = a1.find(x);
                int count = temp->second;

                vector<int> g(count, x); // 2->2
                res.insert(res.end(), g.begin(), g.end());
                a1.erase(x);

            }

        }
        for(auto x :a1){
            
            int key = x.first;
            int val = x.second;
            vector<int> v(val, key);

            res.insert(res.end(), v.begin(), v.end());

        }
        return res;

    }
};