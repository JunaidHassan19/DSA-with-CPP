#include <iostream>
using namespace std;

// Function to calculate the amount of water trapped
void trappingRainwater(int *heights, int len)
{
  int leftMax[20000];                   // Assuming the maximum size of the array is 20000
  int rightMax[20000];                  // Assuming the maximum size of the array is 20000
  leftMax[0] = heights[0];              // Initialize the first element of leftMax with the first height
  rightMax[len - 1] = heights[len - 1]; // Initialize the last element of rightMax with the last height

  for (int i = 1; i < len; i++)
  {
    leftMax[i] = max(leftMax[i - 1], heights[i - 1]); // Calculate the maximum height to the left of the current index
  }
  for (int i = len - 2; i >= 0; i--) // Calculate the maximum height to the right of the current index
  {
    rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
  }
  // Calculate the total water trapped by iterating through each index and finding the minimum of leftMax and rightMax at that index, then subtracting the height at that index
  int waterTrapprd = 0;
  for (int i = 0; i < len; i++)
  {
    int currWater = min(leftMax[i], rightMax[i]) - heights[i]; // Calculate the water trapped at the current index
    if (currWater > 0)
    {
      waterTrapprd += currWater;
    }
  }
  cout << "Water Trapped = " << waterTrapprd << endl;
}

int main()
{
  int heights[7] = {4, 2, 0, 6, 3, 2, 5};
  int len = sizeof(heights) / sizeof(int);

  trappingRainwater(heights, len);
  return 0;
}