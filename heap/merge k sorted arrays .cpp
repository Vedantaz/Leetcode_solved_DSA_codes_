class data{
    public:
    int val, apos, vpos;
    data(int v, int ap, int vp){
        
        val = v;
        apos = ap;
        vpos = vp;
        
    }
};

struct mycomp{
    bool operator()(data &d1, data &d2){
        return d1.val > d2.val;
        
    }
    
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    
     void merge(vector<int> &res, int start, int mid, int finish, vector<int> &ans){

        vector<int> res;
        priority_queue<data, vector<data> , mycomp> pq;
        for(int i=0;i<k ;i++){
            data curr = d(arr[i][0], i, 0);
            res.push_back(curr.val);
            int ap = curr.apos, vp = curr.vpos;
            if(vp+1 < arr[ap].size()){
                data d(arr[ap][vp+1], ap, vp+1);
                pq.push(d);
            }
            
        }
        return res;
        
    }
};