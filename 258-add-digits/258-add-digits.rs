impl Solution {
    pub fn add_digits(num: i32) -> i32 {
        let mut temp = num;
        while temp >= 10{
            temp = {
                let mut sum = 0;
                while temp > 0 {
                    sum += temp % 10;
                    temp /= 10;   
                }
                sum
            }
        }
        temp
    }
}