class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {

        int empty = numBottles;
        int x = numExchange;
        int total = empty;

        while(empty>=x)
        {
            empty-=x;
            empty++;
            total++;
            x++;
        }

        return total;
        
    }
};