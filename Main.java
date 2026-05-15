class car
{
    public void start()
    {
        System.out.println("Car is starting");
    }
    public void acc()
    {
        System.out.println("Car is acclr...");
    }
    public void drive()
    {
        System.out.println("Car is driving");
    }
    public void stop()
    {
        System.out.println("Car stop");
    }
}

class Maruti800 extends car
{
    public void acc()
    {
        System.out.println("Maruti800 is acclr at max");
    }
    public void drive()
    {
        System.out.println("Maruti800 is driving");
    }
    public void combustion()
    {
        System.out.println("Maruti800 combustion");
    }
}

class Innova extends car
{
    public void acc()
    {
        System.out.println("Innova is acclr at max");
    }
    public void drive()
    {
        System.out.println("Innova is driving");
    }
    public void combustion()
    {
        System.out.println("Innova combustion");
    }
}

class Ferrari extends car
{
    public void acc()
    {
        System.out.println("Ferrari is acclr at max");
    }
    public void drive()
    {
        System.out.println("Ferrari is driving");
    }
    public void combustion()
    {
        System.out.println("Ferrari combustion");
    }
}


public class Main
{
	public static void main(String[] args) {
		Maruti800 m = new Maruti800();
		Innova i = new Innova();
		Ferrari f = new Ferrari();
		
		m.start();
		m.acc();
		m.drive();
		m.stop();
		m.combustion();
		
		i.start();
		i.acc();
		i.drive();
		i.stop();
		i.combustion();
		
		f.start();
		f.acc();
		f.drive();
		f.stop();
		f.combustion();
	}
}
