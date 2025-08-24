

/*Iterate over the given array from end and find the first index (pivot) which doesn't follow property of non-increasing suffix, (i.e,  arr[i] < arr[i + 1]).
If pivot index does not exist, then the given sequence in the array is the largest as possible. So, reverse the complete array. For example, for [3, 2, 1], the output would be [1, 2, 3]
Otherwise, Iterate the array from the end and find for the successor (rightmost greater element) of pivot in suffix.
Swap the pivot and successor
Minimize the suffix part by reversing the array from pivot + 1 till n.*/
class Solution {
    public:
      void nextPermutation(vector<int>& arr) {
          // code here
          int pivot = -1,n = arr.size();
          for(int i=n-2;i>=0;i--)
          {
              if(arr[i] < arr[i+1])
              {
              pivot = i;
              break;    
              }
              
          }
          
          if(pivot == -1)
          {
              reverse(arr.begin(),arr.end());
              return;
          }
          
          // find the right most elelment just grater than pivot 
          for(int i=n-1;i>pivot;i--)
          {
              if(arr[i] > arr[pivot])
              {
                  swap(arr[i],arr[pivot]);
                  break;
              }
          }
          
          // reverse pivot+1 to n-1;
          
          int i = pivot+1 , j = n-1;
          while(i <= j)
          {
              swap(arr[i],arr[j]);
              i++;
              j--;
          }
          
      }
  };