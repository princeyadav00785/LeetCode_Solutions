// https://leetcode.com/problems/maximum-strong-pair-xor-ii

/**
 * Finds the maximum XOR among all strong pairs in the array.
 * @param {number[]} nums - The input array of integers.
 * @returns {number} - The maximum XOR value among all strong pairs.
 */
var maximumStrongPairXor = function(nums) {
    // Sort the array in ascending order
    nums.sort((firstNum, secondNum) => firstNum - secondNum);

    // Get the length of the array
    let arrayLength = nums.length;

    // Initialize the result variable to store the maximum XOR value
    let maxXOR = 0;

    // Nested loop to iterate over all pairs of elements in the array
    for (let i = 0; i < arrayLength; ++i) {
        for (let j = i; j < arrayLength; ++j) {
            // Check the condition for a strong pair
            if (nums[j] - nums[i] <= nums[i]) {
                // Update the result with the maximum XOR
                maxXOR = Math.max(maxXOR, nums[i] ^ nums[j]);
            } else {
                // Break the inner loop if the condition is not satisfied
                break;
            }
        }
    }

    // Return the maximum XOR value among all strong pairs
    return maxXOR;
};
