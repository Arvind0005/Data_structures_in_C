class Solution {
public:
    int reverse(int x) {
        bool is_neg =false;
        if(x>INT_MAX)
        {
            return 0;
        }
        unsigned long long int  sx=x;
        if(x<0)
        {
            is_neg=true;
            if(sx*-1>INT_MAX)
            {
                return 0;
            }
            x=x*(-1);
        }
        int k=0;
        int dx=x;
        while(dx>0)
        {
            dx=dx/10;
            k++;
        }
        k--;
        int rx=0;
        dx=x;
        while(dx>0)
        {
            int R=dx%10;
            if((rx+(R*pow(10,k)))>INT_MAX)
            {
                return 0;
            }
            rx=rx+(R*pow(10,k));
            k--;
            dx=dx/10;
        }
        if(is_neg)
        {
            rx=rx*(-1);
        }
        if(rx>INT_MAX)
        {
            return 0;
        }
        else
        {
            return rx;
        }
    }
};
