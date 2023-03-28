#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
class solution{

// traverse through the vector >  and store the negative value 
// sort the respected array ..
// from behind > find it with map stored positive integers
// if match , then -1 the value in map by 1 ...
// repectively repeat and continue


public : 
    vector<string> winner(arr[], n){
        unordered_map<string, int> res;
        vector<string> s;

        for(int i=0; i<n ; i++){
            res[arr[i]]++;

        }
        int maxc = 0;
        string fname = "";

        for(auto x = res.begin(); x!= res.end(); ++x){
            string key = x->first;
            int c = x->second;
            if(c>maxc) maxc = c;
            else if(c == maxc){
                if(key > fname) fname = key;
            }

        }
        return maxc;


    }

    }
int main(){
    string arr[] = {"ved","ved","ved","ved","vedi","vedi"};
    int l = sizeof(arr)/ sizeof(arr[0]);
    Solution obj;
    vector<string> res = obj.winner(arr,n); 
    cout<<winner(arr[], n)<<endl;
    
}