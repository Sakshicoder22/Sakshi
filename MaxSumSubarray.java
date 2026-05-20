class MaxSumSubarray{
public static void printSubarray(int arr[]){
int currsum=0;
int maxsum=Integer.MIN_VALUE;
for(int i=0;i<arr.length;i++){
int start=i;
for(int j=0;j<arr.length;j++){
int end=j;
for(int k=start;k<=end;k++){
currsum+=arr[k];
}
System.out.println(currsum);
if(maxsum<currsum){
maxsum=currsum;
}
}
}
System.out.println("Maximum sum="+maxsum);
}
public static void main(String[] args){
int arr[]={-2,4,-6,8,10};
printSubarray(arr);
}
}
