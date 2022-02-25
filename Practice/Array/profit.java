package com.company;

public class profit {
    static int buysell(int[] arr,int n){
        int max = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp = arr[j]-arr[i];
                if(temp>max){
                    max = temp;
                }
            }
        }
        return max;
    }

    public static void main(String[] args){
        int[] arr = {7,6,4,3,1};
        int n = arr.length;

        int result = buysell(arr,n);
        System.out.println("Maximum Profit = "+result);
    }
}
