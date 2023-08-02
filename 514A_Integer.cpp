    #include<iostream>;
    #include<valarray>;
     
    using namespace std;
     
    #define int long long
     
    int power(int x, int n)
    {
        int ans = 1;
        for(int  i = 0; i < n; ++i) {
            ans *= x;
        }
        return ans;
    }
     
     
    int countDigits(int num)  {
        int count = 0;
        while (num != 0) {
            num = num / 10;
            ++count;
        }
        return count;
    }
     
    signed main(){
        int og_num, edit_num, answer, total_digits, current_digit, current_digit_number, answer_holder;
        cin >>  og_num;
        edit_num = og_num;
        answer = 0;
        total_digits = countDigits(og_num);
        current_digit_number = 1;
        while(edit_num > 0){
            current_digit = edit_num % 10;
            if (total_digits==1){
                if (current_digit==9){
                    answer_holder = 9;
                }else if(9-current_digit <= current_digit){
                    answer_holder = 9-current_digit;
                }else{
                    answer_holder = current_digit;
                }
            }else{
                if (total_digits == current_digit_number && current_digit==9){
                    answer_holder = 9ll * power(10, current_digit_number - 1);
                }else{
                    if (9-current_digit <= current_digit){
                        answer_holder = (9ll-current_digit) * power(10, current_digit_number - 1);
                    }else{
                        answer_holder = current_digit * power(10, current_digit_number - 1);
                    }
                }
            }
     
            answer += answer_holder;
            current_digit_number++;
            edit_num /= 10;
        }
     
        cout << answer;
    }