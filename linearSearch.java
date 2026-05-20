import java.util.Scanner;
public class Arrayss{
public static int linearSearch(int arr[],int key){
for(int i=0;i<arr.length;i++){
if(arr[i]==key)
return i;
}
return -1;
}
public static void main(String args[]){
int arr[]={2,3,56,43,78,22,79,10};
int a=linearSearch(arr);
if(a==-1)
System.out.println("key not found");
else
System.out.println(" key found at "+a);
}
}




