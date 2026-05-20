import java.util.Scanner;
public class Palindromeseries{
public static void main(String s[]){
Scanner sc=new Scanner(System.in);
int m;
System.out.println("enter upto which you want to generate palindrome series");
m=sc.nextInt();
for(int i=1;i<=m;i++){
int no=i;
int num=0;
while(no>0){
int rem=no%10;
num=num*10+rem;
no=no/10;
}
if(i==num)
System.out.println(i+" is palindrome");
}
}
}
