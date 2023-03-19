/*
 * @lc app=leetcode.cn id=374 lang=c
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int left=1,right=n;
    while (left<right)
    {
        int mid=left+(right-left)/2;
        if(guess(mid)<0)
            right=mid-1;
        else if(guess(mid)>0)
            left=mid+1;
        else
            return mid;
    }
    return left;
}
// @lc code=end

