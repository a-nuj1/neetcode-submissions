class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int n = piles.size();
        int low = 1, high = maxi;
        int ans = maxi;

        while(low <= high){
            int mid = low + (high - low)/2;
            int hours = 0;
            for(auto it: piles){
                hours += (it + mid - 1)/mid;
            }

            if(hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else if(hours > h){
                low = mid + 1;
            }
            else high = mid - 1;
        }

        return ans;


        // for(int k = 1; k<= maxi; k++){
        //     int hoursTakes = 0;
        //     for(int i = 0; i<n; i++){
        //         hoursTakes += (piles[i]+k-1)/k;
        //         if(hoursTakes > h)break;
        //     }
        //     if(hoursTakes <= h)return k;
            
        // }
        // return maxi;
    }
};
