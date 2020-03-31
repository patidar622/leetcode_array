class Solution {
public:
    int trap(vector<int>& h) {
        if(h.size()==0)
            return 0;
        int l=0,r=h.size()-1;
        int l_max=0,r_max=0,sum=0;
        while(l<r)
        {
            if(h[l]<h[r])
            {
                if(h[l]>=l_max)
                    l_max=h[l];
                else
                {
                    sum+=l_max-h[l];
                }
                    l++;
            }
            else
            {
                if(h[r]>=r_max)
                    r_max= h[r];
                else
                {
                    sum+=r_max-h[r];}
                    r--;
            }
        }
        return sum;
    }
};
