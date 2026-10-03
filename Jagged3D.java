import java.util.Scanner;
public class Jagged3D
{
	public static void main(String[] args) {
	int b=0;
	Scanner scan=new Scanner(System.in);
	System.out.println("Enter the number of blocks");
	b=scan.nextInt();
    int [][][] arr=	new int[b][][];
    for(int i=0; i<b;i++){
        System.out.println("Enter the number of classroom"+":");
        int classroom=scan.nextInt();
        arr[i]=new int[classroom][];
        for(int j=0; j<classroom; j++){
            System.out.println("Enter the number of students in classroom:"+(j+1)+":");
            int students=scan.nextInt();
            arr[i][j]=new int[students];
            for(int k=0; k<students; k++){
                System.out.println("Enter the marks of students:");
                arr[i][j][k]=scan.nextInt();
            }
        }
    }
	for(int i=0; i<b; i++){
	    System.out.println("block"+(i+1)+":");
	    for(int j=0; j<arr[i].length; j++){
	        System.out.println("Marks scored by student in classroom In block" +(j+1));
	        for(int k=0; k<arr[i][j].length; k++){
	            System.out.println("marks scored by student:"+arr[i][j][k]);
	        }
	    }
	}
	
	}
}
