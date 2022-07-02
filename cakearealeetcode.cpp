const int mod = 1e9 + 7;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
 
        // Insert the right bound h and w
        // in their respective vectors
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
         
          //Initialising both by first indexs,
          //to consider first rectangle formed by
          //respective horizontal and vertical cuts
        int maxHorizontal = horizontalCuts[0];
        int maxVertical = verticalCuts[0];
 
        // Find the maximum Horizontal Length possible
        for (int i = 1; i < horizontalCuts.size(); i++) {
            int diff
                = horizontalCuts[i] - horizontalCuts[i - 1];
            maxHorizontal = max(maxHorizontal, diff);
        }
 
        // Find the maximum vertical Length possible
        for (int i = 1; i < verticalCuts.size(); i++) {
            int diff
                = verticalCuts[i] - verticalCuts[i - 1];
            maxVertical = max(maxVertical, diff);
        }
 
        // Return the maximum area of rectangle
        return (int)((long)maxHorizontal * maxVertical
                     % mod);
    }
};
