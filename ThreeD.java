import java.util.Scanner;
public class ThreeD
{
	public static void main(String[] args) {
	    int b,r,c=0;
	   Scanner scan =new Scanner(System.in);
	   System.out.println("Enter the number of block:");
	   b=scan.nextInt();
	   System.out.println("Enter the number of rows:");
	   r=scan.nextInt();
	   System.out.println("Enter the number of columns");
	   c=scan.nextInt();
	   int [][][] arr=new int [b][r][c];
	   
	   for(int i=0; i<b; i++){
	       for(int j=0; j<r; j++){
	           for(int k=0; k<c; k++){
	              System.out.println("Enter the marks of student:") ;
	              arr[i][j][k]=scan.nextInt();
	           }
	       }
	   }
	   
	   for(int i=0; i<b; i++){
	       for(int j=0; j<r; j++){
	           for(int k=0; k<c; k++){
	              System.out.println("Marks scored by student is: "+arr[i][j][k]) ;
	           }
	       }
	   }
	 
}
}