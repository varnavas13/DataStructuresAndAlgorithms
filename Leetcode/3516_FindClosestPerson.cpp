class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-x)==abs(z-y))
        return 0;
        else if(abs(z-x)<abs(z-y))
        return 1;
        return 2;
    }
};
