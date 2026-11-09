class Solution {
public:
    vector<vector<string>> suggestedProducts(
        vector<string>& products, string searchWord) {

        sort(products.begin(), products.end());

        vector<vector<string>> ans;
        string prefix = "";

        for(char c : searchWord) {
            prefix += c;

            vector<string> temp;

            auto it = lower_bound(
                products.begin(), products.end(), prefix
            );

            for(int i = 0; i < 3 && it + i != products.end(); i++) {
                string s = *(it + i);

                if(s.find(prefix) == 0)
                    temp.push_back(s);
                else
                    break;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};