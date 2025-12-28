class Solution {
    public:
        int maxContainers(int n, int w, int maxWeight) {
         if(w <= maxWeight  && n==1)
        return 1;
         if (maxWeight/w <= n*2 )
            return maxWeight/w ;
         else
         return n*2 ;

        }
    };