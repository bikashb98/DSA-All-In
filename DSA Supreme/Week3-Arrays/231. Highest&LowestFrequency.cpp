// 231. Identify Elements with Highest and Lowest Frequency Separately

/* 
Problem Description
You are given an array of integers. Your task is to identify two elements: the one that appears with the highest frequency and the one that appears with the lowest frequency
 in the array. In the event that multiple elements share the same highest or lowest frequency, select the smallest element among those.
 Example:
Input:
[4, 4, 1, 2, 2, 2, 3, 3, 3, 3]

Output:
Highest Frequency Element: 3
Lowest Frequency Element: 1
*/

// 1st attempt

class Solution {
public:
    pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
        // Implement logic to find elements with highest and lowest frequency

      
        int n = arr.size();
        int highest = INT_MIN;
        int lowest = INT_MAX;
        int count = 1;
        int highestfreq = INT_MIN;
        int lowestfreq = INT_MAX;

        for (int i=0; i<n; i++) {
            bool alreadySeen= false;

            for(int k = 0; k<i; k++){
                if (arr[i] == arr[k]){
                    alreadySeen = true;
                    break;
                }
            }

            if (alreadySeen)
                continue;


            for (int j=i+1; j<n; j++){
                if (arr[i] == arr[j]) {
                    count ++;
                }
            }
            if (count > highest) {
                highest = count;
                highestfreq = arr[i];
            }
            if (count == highest){
                if (arr[i]<highestfreq)
                    highestfreq=arr[i];
            }
            if (count< lowest) {
                lowest = count;
                lowestfreq = arr[i];
            }
            if(count == lowest){
                if (arr[i]< lowestfreq)
                    lowestfreq=arr[i];
            }
            count = 1;
        }
        return {highestfreq, lowestfreq}; 
    }
};