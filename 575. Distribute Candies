class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int>type;
        for (int i = 0; i < n; i++) 
        {
           type.insert(candyType[i]);
        }
        int sizeofset=type.size();
        int limit=n/2;
        int smaller=0;
        if(sizeofset>limit)
        {
            smaller=limit;
        }
        else
        {
            smaller=sizeofset;
        }
        return smaller;
    }
};
