class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0, tank = 0, start = 0;
        
        for (int i = 0; i < gas.size(); ++i) {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if (total_gas < total_cost) return -1;

        for (int i = 0; i < gas.size(); ++i) {
            tank += gas[i] - cost[i];
            if (tank < 0) {
           
                start = i + 1;
                tank = 0;
            }
        }
        
        return start;
    }
};