class Solution {
    public int[] plusOne(int[] digits) {
        int carry=0;
        digits[digits.length-1]=digits[digits.length-1]+1;
        if(digits[digits.length-1]>9){
            carry=1;
            digits[digits.length-1]=digits[digits.length-1]%10;
        }else{
            return digits;
        }
        for(int i=digits.length-2; i>=0; i--){
            digits[i]+=carry;
            if(digits[i]>9){
                carry=1;
                digits[i]=digits[i]%10;
            }else{
                return digits;
            }
        }
        if(carry==1){
            int[] another=new int[digits.length+1];
            for(int i=another.length-1; i>0; i--){
                another[i]=digits[i-1];
            }
            another[0]=1;
            return another;
            }
       
        return digits;
    }
}
