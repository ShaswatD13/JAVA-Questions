import java.util.Scanner;
public class FourD
{
	public static void main(String[] args) {
	    int m,b,r,c=0;
	    Scanner scan=new Scanner(System.in);
	    System.out.println("Enter the number of cities:");
	    m=scan.nextInt();
	    System.out.println("Enter the number of blocks:");
	    b=scan.nextInt();
	    System.out.println("Enter the number of rows: ");
	    r=scan.nextInt();
	    System.out.println("Enter the number of columns: ");
	    c=scan.nextInt();
	   int  [][][][] arr=new int[m][b][r][c];
	   for(int i=0; i<m; i++){
	       for(int j=0; j<b; j++){
	           for(int k=0; k<r; k++){
	               for(int l=0; l<c; l++){
	                   System.out.println("Enter the marks of student:");
	                   arr[i][j][k][l]=scan.nextInt();
	               }
	           }
	       }
	   }
	   
	   for(int i=0; i<m;i++){
	       for(int j=0; j<b;j++){
	           for(int k=0; k<r; k++){
	               for(int l=0; l<c; l++){
	                   System.out.println("Marks scored by student is:"+arr[i][j][k][l]);
	               }
	           }
	       }
	   }
}
}