class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {

        reverse(arr.begin(), arr.end());

        int carry = 1;

        for(int i = 0; i < arr.size(); i++) {

            int sum = arr[i] + carry;

            arr[i] = sum % 10;
            carry = sum / 10;

            if(carry == 0)
                break;
        }

        if(carry)
            arr.push_back(carry);

        reverse(arr.begin(), arr.end());

        return arr;
    }
};
//approach 2


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};