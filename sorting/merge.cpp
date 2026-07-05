  #include <iostream>
    #include <string>
    #include <vector>
        using namespace std;

  void mergeSort(vector<int>& arr){             // forgot &
                        if (arr.size() <= 1){               // arr below 1 return
                            return;
                        }
                        int mid = arr.size() / 2;               // spilt to find mid
                        vector<int> left(arr.begin() , arr.begin() + mid);      // point to first [not index] let say arr[1] , arr[1] + 2 = arr[3]
                        vector<int> right(arr.begin() + mid , arr.end());                 // let say arr[1] - arr.begin (1)   , arr.end point to last but it will give last value back
                            // mistake forgot arr.begin() + mid  - we need to make it start at middle
                        mergeSort(left);            // recursion
                        mergeSort(right);           // recursion

                        

                        int i = 0 , j = 0 , k = 0;                          //mistake int i , j , k = 0; this is wrong it only make k = 0
                        
                        while(i < left.size() && j < right.size()){     // why we make this loop?? to see either left or right what left in it?
                            if (left[i] < right[j]){            
                                arr[k] = left[i];
                                i++;
                            } else {arr[k] = right[j];
                            j++;
                            }
                            k++;
                        }
                        
                        while (i < left.size()){            // keep left
                            arr[k] = left[i];
                            i++;
                            k++;
                        }
                        while (j < right.size()){           // keep right
                            arr[k] = right[j];                       // mistake forgot right[j]
                            j++;
                            k++;
                        }
                                            //mistake no need to k++
            }