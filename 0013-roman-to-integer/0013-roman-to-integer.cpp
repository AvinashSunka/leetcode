   class Solution {
    public:
        int romanToInt(string s) {
            int n = s.length(), num = 0;
            char i, prev;
            for(int j = 0; j<n; j++)
            {
                i = s[j];
                if(j > 0)
                {
                    prev = s[j - 1];
                    if((i == 'D' || i == 'M') && prev == 'C')
                    {
                        num -= 200;
                    }
                    else if((i == 'L' || i == 'C') && prev == 'X')
                    {
                        num -= 20;
                    }
                    else if((i == 'V' || i == 'X') && prev == 'I')
                    {
                        num -= 2;
                    }
                } 
                    switch(i) {
                        case 'I' :
                            num += 1;
                            break;
                        case 'V':
                            num += 5;
                            break;
                        case 'X':
                            num += 10;
                            break;
                        case 'L' :
                            num += 50;
                            break;
                        case 'C':
                            num += 100;
                            break;
                        case 'D':
                            num += 500;
                            break; 
                        case 'M' :
                            num += 1000;
                            break;         
                    }
                }
            return num;
        }
    };
