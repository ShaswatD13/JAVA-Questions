class Student
{
  String name;
  int Roll_No;
  float CGPA;
}

public String toString
{
	return "Name": "+name+"\nRollnum: "+Roll_No+"\nCgpa: "+CGPA+";
}
 
class Launch
{
  public static void main(String[] args)
  {
   Student ref = new Student();
   System.out.println(ref.name);
   System.out.println(ref.Roll_No);
   System.out.println(ref.CGPA);

  }
}