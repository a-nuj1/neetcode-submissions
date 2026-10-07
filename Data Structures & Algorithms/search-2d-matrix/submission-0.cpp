class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>oneRow;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                oneRow.push_back(matrix[i][j]);
            }
        }

        int si = 0, ei = oneRow.size()-1;
        while(si <= ei){
            long mid = si + (ei - si)/2;

            if(oneRow[mid] == target)return true;
            else if(oneRow[mid] < target)si = mid + 1;
            else ei = mid - 1;
        }
        return false;

        // for(int i = 0; i<n; i++){
        //     // vector<int>row;
        //     int low = matrix[i][0];
        //     int high = matrix[n-1][0];

        //     while(low <= high){
        //         int mid = low + (high - low)/2;

        //         if(mid == target)return true;
        //         else if(mid < target)low = mid+1;
        //         else high = mid -1;
        //     }
        // }

        // return false;
    }
};
