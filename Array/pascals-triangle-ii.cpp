class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> result;
        result.push_back(1);
        if(rowIndex == 0)
            return result;
        if(rowIndex > 0)
            result.push_back(1);
        for(int i = 2;i <= rowIndex;i++) {
            vector <int> temp;
            temp.push_back(1);
            for(int j = 0;j < result.size()-1;j++) {
                temp.push_back(result[j]+result[j+1]);
            }
            temp.push_back(1);
            result = temp;
        }
        return result;
    }
};