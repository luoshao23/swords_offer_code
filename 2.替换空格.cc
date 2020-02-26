class Solution {
public:
	void replaceSpace(char *str,int length) {
        if (str == NULL || length < 0)
            return;

        int i = 0;
        int blankNum = 0;
        int originalNum = 0;
        while (str[i] != '\0')
        {
            if (str[i] == ' ')
                ++blankNum;
            ++originalNum;
            ++i;
        }

        int newLen = originalNum + 2*blankNum;

        while (originalNum >=0 && newLen >=0)
        {
            if (str[originalNum] == ' ')
            {
                str[newLen--] = '0';
                str[newLen--] = '2';
                str[newLen--] = '%';
            }else{
                str[newLen--] = str[originalNum];
            }
            --originalNum;
        }

	}
};