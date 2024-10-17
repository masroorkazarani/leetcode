class Solution {
public:
    int maximumSwap(int num) {
        string charNum = to_string(num);
    int max = num;
    for (int i = 0; i < charNum.size(); i++)
    {
        for(int j=i+1;j< charNum.size();j++){
            swap(charNum[i],charNum[j]);
            int temp = stoi(charNum);
            if(max < temp) max = temp;
            swap(charNum[i], charNum[j]);
        }
    }
    return max;
    }
};