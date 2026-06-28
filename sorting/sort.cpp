#include <iostream>
#include <string>
#include <vector>
using namespace std;


 void quickSort(vector<int>& arr,int low ,int high){
                if (low >= high){            // it has to be low >= high cuz what if it 1 > 1 it return false 
                    return;
                }
                int pivot = arr[high];              
                int i = low - 1;
                    for(int j = low;j < high;j++){         // mistake j < pivot - no it has to be high cuz it need to do full loop not last value in index
                        if(arr[j] < pivot){             // let say i =1
                            i++;
                            swap(arr[i],arr[j]);
                        }
                    }
                    swap(arr[i + 1],arr[high]);
                    int pivotIndex = i + 1;     // i = 2
                    quickSort(arr, low , pivotIndex - 1);   
                    quickSort(arr,pivotIndex + 1, high);
            }

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