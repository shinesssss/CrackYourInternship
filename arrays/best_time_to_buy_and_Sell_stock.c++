 //brute force
 int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0;
        int maxp=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pro=prices[j]-prices[i];
                maxp=max(maxp,pro);
            }
        }
        return maxp;
    }
    time complexity:0(n^2);
    space complexity:o(1);

// BETTER
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0;
        int maxp=0;

       int st=prices[0];
       for(int i=1;i<n;i++){
           st=min(st,prices[i]);
           pro=prices[i]-st;
           maxp=max(maxp,pro);
       }
       return maxp;
    }
        
};
