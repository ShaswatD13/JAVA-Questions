import java.util.*;

/**
 * The Guesser class represents the person who sets the number
 * that players have to guess in the game.
 */
class Guesser
{
	int gnum;

	/**
	 * This method asks the guesser to enter a number.
	 * The entered number will be the target number
	 * that players try to predict.
	 *
	 */
	int guessnum ()
	{
		Scanner scan= new Scanner (System.in);
		System.out.println("Guess The Number: ");
		gnum=scan.nextInt();
		return gnum;
	}
}

/**
 * The Player class represents a player participating in the game.
 * Each player tries to predict the number chosen by the Guesser.
 */
class Player
{
	int pnum;

	/**
	 * This method allows a player to enter their predicted number.
	 *
	 */
	int predictnum()
	{
		Scanner scan = new Scanner (System.in);
		pnum=scan.nextInt();
		return pnum;
	}
}

/**
 * The Umpire class manages the game.
 * It collects numbers from the guesser and players,
 * and then compares them to determine the winner.
 */
class Umpire
{
	int numfromP1;
	int numfromP2;
	int numfromP3;
	int numfromguess;

	/**
	 * This method collects the number chosen by the Guesser.
	 * It creates a Guesser object and calls the guessnum() method.
	 */
	void collectingnumfromguess()
	{
		Guesser guess= new Guesser ();
		numfromguess=guess.guessnum();
	}

	/**
	 * This method collects predicted numbers from three players.
	 * Each player enters their guess separately.
	 */
	void collectingnumfromP()
	{
		Player P1=new Player();
		System.out.println("Enter The Number Player 1: ");
		numfromP1=P1.predictnum();

		Player P2=new Player();
		System.out.println("Enter The Number Player 2: ");
		numfromP2=P2.predictnum();

		Player P3=new Player();
		System.out.println("Enter The Number Player 3: ");
		numfromP3=P3.predictnum();
	}

	/**
	 * This method compares the guesses of all players
	 * with the number selected by the Guesser.
	 * It determines which player guessed correctly
	 * and prints the winner.
	 */
	void compare()
	{
		if (numfromguess==numfromP1)
		{
			System.out.println("Congratulation Player 1 won the match");
		}

		else if (numfromguess==numfromP2)
		{
			System.out.println("Congratulation Player 2 won the match");
		}

		else if (numfromguess==numfromP3)
		{
			System.out.println("Congratulation Player 3 won the match");
		}
		else {
			System.out.println("Congratulation No Match Found !");
		}

	}
}

/**
 * The firstgame class contains the main method.
 * It starts the game by creating an Umpire object
 * and coordinating the guessing process.
 */
public class Game
{
	/**
	 * Main method that runs the guessing game.
	 * It performs the following steps:
	 * 1. Collect number from Guesser
	 * 2. Collect guesses from Players
	 * 3. Compare guesses and declare the winner
	 *
	 */
	public static void main(String[] args) {
		Umpire u = new Umpire();
		u.collectingnumfromguess();
		u.collectingnumfromP();
		u.compare();
	}
}
