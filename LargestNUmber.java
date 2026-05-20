class LargestNUmber{
public static int get_largest(int arr[]){
int largest=Integer.MIN_VALUE;
for(int i=0;i<arr.length;i++){
 if(arr[i]>largest)
  largest=arr[i];
}
return largest;
}
public static void main(String[] args){
 
int arr[]={23,89,77,67,99,87,65,9};
int index=get_largest(arr);
System.out.println("Largest elemnt in array is:"+index);
}
}