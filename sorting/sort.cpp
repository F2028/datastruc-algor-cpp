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
