public class AllOcurrence{
static int count=0;
public static void occurrence(int arr[],int key,int i){
if(i==arr.length){
System.out.println(count);
return;
}
if(arr[i]==key){
count++;
System.out.print(i+" ");

}
occurrence(arr,key,i+1);
}
public static void main(String[] args){
int arr[]={3,2,4,5,6,7,2,2};
int key=2;
occurrence(arr,key,0);
}
}


