class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        int r=grid.size();
        int c =grid[0].size();
        if(grid[r-1][c-1]>=0)
        return 0;
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(grid[i][j]<0)
                count++;
            }
        }
        return count;
    }
};