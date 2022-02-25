package com.company;

public class Countpairs {
    static int sum(int[] arr,int n,int k){
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp = arr[i]+arr[j];
                if(temp == k){
                    count+=1;
                }
            }
        }
        return count;
    }

    public static void main(String[] args){
        int[] arr = {1, 5, 7, 1};
        int n = arr.length;
        int k = 6;

        int Result = sum(arr,n,k);
        System.out.println("Pairs of sum "+k+" = "+Result);
    }
}
