class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();

        int i = 0, j = col - 1;
        while (i < row && j >= 0)
        {
            if (array[i][j] == target)
                return true;
            if (array[i][j] > target)
            {
                j -= 1;
            }else{
                i += 1;
            }
        }
        return false;
    }
};