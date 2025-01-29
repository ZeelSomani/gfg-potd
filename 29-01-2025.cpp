class Solution
{
  public:
    double power(double b, int e) 
    {
         double result = 1.0;
        int exponent = abs(e);
    while (exponent > 0) 
   {
        if (exponent % 2 == 1)
       {
            result *= b;
        }
        b *= b;
        exponent /= 2;
    }
    if (e < 0) 
    {
        result = 1.0 / result;
    }
    return result;
    }
};
